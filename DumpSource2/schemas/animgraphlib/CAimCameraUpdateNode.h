// MGetKV3ClassDefaults (UNKNOWN FOR PARSER)
class CAimCameraUpdateNode : public CUnaryUpdateNode
{
	CAnimParamHandle m_hParameterPosition;
	CAnimParamHandle m_hParameterOrientation;
	CAnimParamHandle m_hParameterSpineRotationWeight;
	CAnimParamHandle m_hParameterPelvisOffset;
	CAnimParamHandle m_hParameterUseIK;
	CAnimParamHandle m_hParameterCameraOnly;
	CAnimParamHandle m_hParameterWeaponDepenetrationDistance;
	CAnimParamHandle m_hParameterWeaponDepenetrationDelta;
	CAnimParamHandle m_hParameterCameraClearanceDistance;
	AimCameraOpFixedSettings_t m_opFixedSettings;
};
