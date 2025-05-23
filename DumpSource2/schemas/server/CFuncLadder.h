// MNetworkVarNames = "Vector m_vecLadderDir"
// MNetworkVarNames = "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames = "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames = "float m_flAutoRideSpeed"
// MNetworkVarNames = "bool m_bFakeLadder"
class CFuncLadder : public CBaseModelEntity
{
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	Vector m_vecLadderDir;
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts;
	Vector m_vecLocalTop;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	Vector m_vecPlayerMountPositionTop;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	Vector m_vecPlayerMountPositionBottom;
	// MNetworkEnable
	float32 m_flAutoRideSpeed;
	bool m_bDisabled;
	// MNetworkEnable
	bool m_bFakeLadder;
	bool m_bHasSlack;
	CUtlSymbolLarge m_surfacePropName;
	CEntityIOOutput m_OnPlayerGotOnLadder;
	CEntityIOOutput m_OnPlayerGotOffLadder;
};
