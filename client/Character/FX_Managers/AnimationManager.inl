//	inliners for AnimationManager
#include <ASSERT.H>

//
//	
//	ATTACKMOTIONINFO
//
//

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::GetStartFrame()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline WORD		ATTACKMOTIONINFO::GetStartFrame	(	int		in_frameIdx		)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );

	return	startframes[ in_frameIdx ];
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::GetEndFrame()                                                      �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline WORD		ATTACKMOTIONINFO::GetDamageFrame	(	int		in_frameIdx		)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );

	return	damageframes[ in_frameIdx ];
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::GetFreeFrame()                                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline WORD		ATTACKMOTIONINFO::GetFreeFrame	(	int		in_frameIdx		)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );

	return	freeframes[ in_frameIdx ];
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::GetAttackFrame()                                                   �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline WORD		ATTACKMOTIONINFO::GetAttackFrame	(	int		in_frameIdx	)
{
	return	( GetFreeFrame( in_frameIdx ) - GetStartFrame( in_frameIdx ) );
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::SetStartFrame()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		ATTACKMOTIONINFO::SetStartFrame	(	int		in_frameIdx,
													WORD	in_startFrame	)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );
	assert( in_startFrame >= 0 );

	startframes[ in_frameIdx ]	=	in_startFrame;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::SetDamageFrame()                                                   �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		ATTACKMOTIONINFO::SetDamageFrame	(	int		in_frameIdx,
														WORD	in_damageFrame	)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );
	assert( in_damageFrame >= 0 );

	damageframes[ in_frameIdx ]	=	in_damageFrame;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� ATTACKMOTIONINFO::SetFreeFrame()                                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		ATTACKMOTIONINFO::SetFreeFrame	(	int		in_frameIdx,
													WORD	in_freeFrame	)
{
	assert( ( in_frameIdx >= 0 ) && ( in_frameIdx < MAX_DAMAGE_FRAMES ) );
	assert( in_freeFrame >= 0 );

	freeframes[ in_frameIdx ]	=	in_freeFrame;
}

//
//
//	CParamBlock_CalcFreeTime
//
//

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� CParamBlock_CalcFreeTime::SetAnimIndex()                                             �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		CParamBlock_CalcFreeTime::SetAnimIndex	(	int		in_animIndex	)
{
	assert( in_animIndex >= 0 );

	animIndex	=	in_animIndex;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� CParamBlock_CalcFreeTime::SetDesiredTime()                                           �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		CParamBlock_CalcFreeTime::SetDesiredTime	(	float	in_desiredTime	)
{
	assert( in_desiredTime >= 0.0f );

	desiredTime	=	in_desiredTime;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� CParamBlock_CalcFreeTime::SetCurrentComboCount()                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline void		CParamBlock_CalcFreeTime::SetCurrentComboCount	(	float	in_currentComboCount	)
{
	assert( in_currentComboCount >= 0 );

	currentComboCount	=	in_currentComboCount;
}

//
//
//	FX_CAnimManager
//
//


/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetComboCount()                                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetComboCount	(	int		in_animIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetComboCount();
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetDamageFrame()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetDamageFrame	(	int		in_animIndex,
												int		in_comboIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetDamageFrame( in_comboIndex );
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetFreeFrame()                                                      �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetFreeFrame	(	int		in_animIndex,
												int		in_comboIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetFreeFrame( in_comboIndex );
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetAuraStartFrame()                                                 �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetAuraStartFrame	(	int		in_animIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetAuraStartFrame();
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetAuraEndFrame()                                                   �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetAuraEndFrame	(	int		in_animIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetAuraEndFrame();
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetStartFrame()                                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetStartFrame	(	int		in_animIndex,
												int		in_comboIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetStartFrame( in_comboIndex );
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetAttackFrame()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::GetAttackFrame	(	int		in_animIndex,
												int		in_comboIndex	)
{
	return	GetAttackMotionInfo( in_animIndex ).GetAttackFrame( in_comboIndex );
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::IsComboAttack()                                                     �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline int	FX_CAnimManager::IsComboAttack	(	int		in_animIndex	)
{
	if	(	GetAttackMotionInfo( in_animIndex ).GetComboCount()	>=	1	)
		return	true;
	else
		return	false;
}

/*������������������������������������������������������������������������������������������ */ 
/*�� IsSkillAttack()                                                                      �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* CREATED(LAST MODIFIED) : 2004-05-01(2004-05-01) */ 
/* TODO : */ 
inline int	FX_CAnimManager::IsSkillAttack	(	int		in_animIndex	)
{
	if	(	GetAttackMotionInfo( in_animIndex ).IsSkillAttack()	)
		return	true;
	return	false;
}

/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::ShowAttackEffect()                                                  �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* CREATED(LAST MODIFIED) : 2004-05-14(2004-05-14) */ 
/* TODO : */ 
inline int	FX_CAnimManager::ShowAttackEffect	(	int		in_animIndex	)
{
	/* TUNA>> 2004-07-20 : �߰� attack motion info �� ���� non-attack animation �� ��� default ���� 1 �� ��ȯ�ϵ��� �߰� */ 
	if	(	! GetAttackMotionInfo( in_animIndex ).IsComboAttack()	)
		return	true;
	
	if	(	GetAttackMotionInfo( in_animIndex ).ShowAttackEffect()	)
		return	true;
	return	false;
}

/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::ShowAttackAura()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* CREATED(LAST MODIFIED) : 2004-05-14(2004-05-14) */ 
/* TODO : */ 
inline int	FX_CAnimManager::ShowAttackAura	(	int		in_animIndex	)
{
	if	(	GetAttackMotionInfo( in_animIndex ).ShowAttackAura()	)
		return	true;
	return	false;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::CalcAttackTime()                                                    �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline float	FX_CAnimManager::CalcAttackTimeInplace	(	CParamBlock_CalcFreeTime	&in_paramBlock	)
{
	return	GetAttackFrame( in_paramBlock.GetAnimIndex(), in_paramBlock.GetCurrentComboCount() ) * m_Anims[ in_paramBlock.GetAnimIndex() ].animation.m_timePerFrame * 1000.0f;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::CalcAllPartialFreeFrames()                                          �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline float	FX_CAnimManager::CalcAllPartialFreeFrames	(	CParamBlock_CalcFreeTime	&in_paramBlock	)
{
	float	freeFrames;

	if	(	in_paramBlock.GetCurrentComboCount()	==	0	)
	{
		freeFrames	=	GetStartFrame( in_paramBlock.GetAnimIndex(), 0 );
		freeFrames	+=	GetStartFrame( in_paramBlock.GetAnimIndex(), 1 ) - GetFreeFrame( in_paramBlock.GetAnimIndex(), 0 );
	}
	else if	(	in_paramBlock.GetCurrentComboCount()	==	( GetComboCount( in_paramBlock.GetAnimIndex() ) - 1 )	)
	{
		freeFrames	=	m_Anims[ in_paramBlock.GetAnimIndex() ].animation.m_totalFrames - GetFreeFrame( in_paramBlock.GetAnimIndex(), in_paramBlock.GetCurrentComboCount() );
	}
	else
	{
		freeFrames	=	GetStartFrame( in_paramBlock.GetAnimIndex(), in_paramBlock.GetCurrentComboCount() + 1 ) - GetFreeFrame( in_paramBlock.GetAnimIndex(), in_paramBlock.GetCurrentComboCount() );
	}
	
	return	freeFrames;
}

/*���� 2004-04-27 :  ���� */ 
/*������������������������������������������������������������������������������������������ */ 
/*�� FX_CAnimManager::GetAttackMotionInfo()                                               �� */ 
/*������������������������������������������������������������������������������������������ */ 
/* DESCRIPTION   : */ 
/* LAST MODIFIED : 2004-04-27 */ 
/* TODO : */ 
inline ATTACKMOTIONINFO_t&	FX_CAnimManager::GetAttackMotionInfo	(	int		in_motionIndex	)
{
	assert( ( in_motionIndex >= 0 ) && ( in_motionIndex < MAX_COUNT_ANIM ) );

	return	m_attackMotionInfos[ in_motionIndex ];
}
