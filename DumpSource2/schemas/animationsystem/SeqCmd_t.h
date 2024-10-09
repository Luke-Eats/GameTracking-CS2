enum SeqCmd_t : uint32_t
{
	SeqCmd_Nop = 0,
	SeqCmd_LinearDelta = 1,
	SeqCmd_FetchFrameRange = 2,
	SeqCmd_Slerp = 3,
	SeqCmd_Add = 4,
	SeqCmd_Subtract = 5,
	SeqCmd_Scale = 6,
	SeqCmd_Copy = 7,
	SeqCmd_Blend = 8,
	SeqCmd_Worldspace = 9,
	SeqCmd_Sequence = 10,
	SeqCmd_FetchCycle = 11,
	SeqCmd_FetchFrame = 12,
	SeqCmd_IKLockInPlace = 13,
	SeqCmd_IKRestoreAll = 14,
	SeqCmd_ReverseSequence = 15,
	SeqCmd_Transform = 16,
};