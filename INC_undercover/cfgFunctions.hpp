
class INC_undercover
{
	tag = "INCON";
	class undercoverRecruit
	{
		file = "INC_undercover\func";
		class addEH {description = "Handles enemy deaths including suspecting nearby undercover units and reprisals against civilians.";};
		class armedLoop  {description = "Contains functions for arming recruitable civilians."};
		class compromised {description = "Sets the unit as compromised while it is know to enemy units and is doing something naughty.";};
		class cooldown {description = "Initiates a cooldown after the unit has done something naughty";};
		class countAlerted {description = "Counts units of the defined side who have been alerted to a unit.";};
		class gearHandler {description = "Contains functions for gear checks and actions."};
		class getAlerted {description = "Returns the number of given side who know about the unit";};
		class getConfigInfo {description = "Gets config information on a given faction / unit.";};
		class recruitHandler {description = "Handles all civilian recruitment.";};
		class suspiciousEny {description = "Suspicious enemy behaviour.";};
		class UCRhandler {description = "Gets detection scripts running on unit.";};
		class ucrMain {description = "Contains primary UCR functions."};
	};
};
