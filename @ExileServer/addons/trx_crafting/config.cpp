/*  
	config.cpp

	Copyright 2016 Jan Babor

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

class CfgPatches {
	class trx_crafting {
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_server"};
	};
};

class CfgFunctions {
	class TRXServer {
		class System {
		file = "trx_crafting\Functions";
			class clientRequest {};
			class craft {};
			class saveVehicle {};
		};
	};
};

class CfgNetworkMessages
{
	class Craft
	{
		parameters[] = {"STRING","STRING"};
	};
	class SaveVehicle
	{
		parameters[] = {"STRING","STRING"};
	};
};