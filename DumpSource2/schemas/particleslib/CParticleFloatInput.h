// MGetKV3ClassDefaults (UNKNOWN FOR PARSER)
// MClassIsParticleFloat
// MParticleCustomFieldDefaultValue (UNKNOWN FOR PARSER)
class CParticleFloatInput : public CParticleInput
{
	ParticleFloatType_t m_nType;
	ParticleFloatMapType_t m_nMapType;
	float32 m_flLiteralValue;
	CParticleNamedValueRef m_NamedValue;
	int32 m_nControlPoint;
	ParticleAttributeIndex_t m_nScalarAttribute;
	ParticleAttributeIndex_t m_nVectorAttribute;
	int32 m_nVectorComponent;
	float32 m_flRandomMin;
	float32 m_flRandomMax;
	bool m_bHasRandomSignFlip;
	int32 m_nRandomSeed;
	ParticleFloatRandomMode_t m_nRandomMode;
	float32 m_flLOD0;
	float32 m_flLOD1;
	float32 m_flLOD2;
	float32 m_flLOD3;
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute;
	float32 m_flNoiseOutputMin;
	float32 m_flNoiseOutputMax;
	float32 m_flNoiseScale;
	Vector m_vecNoiseOffsetRate;
	float32 m_flNoiseOffset;
	int32 m_nNoiseOctaves;
	PFNoiseTurbulence_t m_nNoiseTurbulence;
	PFNoiseType_t m_nNoiseType;
	PFNoiseModifier_t m_nNoiseModifier;
	float32 m_flNoiseTurbulenceScale;
	float32 m_flNoiseTurbulenceMix;
	float32 m_flNoiseImgPreviewScale;
	bool m_bNoiseImgPreviewLive;
	float32 m_flNoCameraFallback;
	bool m_bUseBoundsCenter;
	ParticleFloatInputMode_t m_nInputMode;
	float32 m_flMultFactor;
	float32 m_flInput0;
	float32 m_flInput1;
	float32 m_flOutput0;
	float32 m_flOutput1;
	float32 m_flNotchedRangeMin;
	float32 m_flNotchedRangeMax;
	float32 m_flNotchedOutputOutside;
	float32 m_flNotchedOutputInside;
	ParticleFloatRoundType_t m_nRoundType;
	ParticleFloatBiasType_t m_nBiasType;
	float32 m_flBiasParameter;
	CPiecewiseCurve m_Curve;
};
