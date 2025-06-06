// MNetworkVarNames = "CHandle< CBasePlayerWeapon > m_hMyWeapons"
// MNetworkVarNames = "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
// MNetworkVarNames = "CHandle< CBasePlayerWeapon> m_hLastWeapon"
// MNetworkVarNames = "uint16 m_iAmmo"
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons;
	// MNetworkEnable
	CHandle< CBasePlayerWeapon > m_hActiveWeapon;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CHandle< CBasePlayerWeapon > m_hLastWeapon;
	// MNetworkEnable
	uint16[32] m_iAmmo;
	bool m_bPreventWeaponPickup;
};
