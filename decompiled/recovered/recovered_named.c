#include "nsmbudx_prelude.h"
#include "nsmbudx_recovered_deps.h"

/* Recovered from main.i64: functions present in the database but absent from the corpus.
 *
 * Hex-Rays emitted these as C++; names are flattened from Outer_method to Outer_method and `this->`
 * is rewritten to the first parameter. Bodies that dereference class types the corpus has no struct
 * for are still present and are counted in RECOVERED_NAMED_STATUS.md rather than dropped.
 */

/* ============================================================================
 * StageActor_afterCreate
 * RVA 0x00000694   size 0x30   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60000694  RVA 0x60000694  size 0x30 */
// Overrides: Actor : 0x60002F08
// 
// Overridden by:
//   - 0x60003140 : CollisionActor
void __fastcall StageActor_afterCreate(StageActor *v, unsigned int onCreateVal)
{
  float posX; // r12
  float y; // r3
  float z; // r2

  if ( onCreateVal == 2 )
  {
    posX = v->position.x;
    v->field_248.x = posX;
    y = v->position.y;
    v->field_248.y = y;
    z = v->position.z;
    v->field_248.z = z;
    v->field_260.x = posX;
    v->field_260.y = y;
    v->field_260.z = z;
  }
  Actor_afterCreate();
}

/* ============================================================================
 * BrickBlockHuge_checkDerivedRuntimeTypeInfo
 * RVA 0x005666B8   size 0x25C   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x605666B8  RVA 0x605666B8  size 0x25C */
// Overrides: BlockBase : 0x60565008
// 
// Overridden by: None
signed int __fastcall BrickBlockHuge_checkDerivedRuntimeTypeInfo(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAE40C & ~(1616275360 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE40C) )
  {
    dword_60CAE408 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE40C);
  }
  if ( a2 == &dword_60CAE408 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616275452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616275544 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616275636 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  if ( a2 == &dword_60C7B380 )
    return 1;
  else
    return sub_60026DC8(a2);
}

/* ============================================================================
 * FlyingBlock_checkDerivedRuntimeTypeInfo
 * RVA 0x00568CEC   size 0x2B0   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60568CEC  RVA 0x60568CEC  size 0x2B0 */
// Overrides: CollisionActor : 0x60004064
// 
// Overridden by: None
signed int __fastcall FlyingBlock_checkDerivedRuntimeTypeInfo(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAE588 & ~(1616285224 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE588) )
  {
    dword_60CAE584 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE588);
  }
  if ( a2 == &dword_60CAE584 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616285316 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616285408 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616285500 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  if ( a2 == &dword_60C7B380 )
    return 1;
  else
    return sub_60026DC8(a2);
}

/* ============================================================================
 * FlyingBlockForAmbush_checkDerivedRuntimeTypeInfo
 * RVA 0x005697FC   size 0x25C   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x605697FC  RVA 0x605697FC  size 0x25C */
// Overrides: BlockBase : 0x60565008
// 
// Overridden by: None
signed int __fastcall FlyingBlockForAmbush_checkDerivedRuntimeTypeInfo(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAE604 & ~(1616287972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE604) )
  {
    dword_60CAE600 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE604);
  }
  if ( a2 == &dword_60CAE600 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616288064 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616288156 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616288248 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  if ( a2 == &dword_60C7B380 )
    return 1;
  else
    return sub_60026DC8(a2);
}

/* ============================================================================
 * BabyYoshiBlock_checkDerivedRuntimeTypeInfo
 * RVA 0x00576B94   size 0x25C   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x60576B94  RVA 0x60576B94  size 0x25C */
// Overrides: BlockBase : 0x60565008
// 
// Overridden by: None
signed int __fastcall BabyYoshiBlock_checkDerivedRuntimeTypeInfo(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEC08 & ~(1616342140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEC08) )
  {
    dword_60CAEC04 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAEC08);
  }
  if ( a2 == &dword_60CAEC04 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616342232 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616342324 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616342416 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  if ( a2 == &dword_60C7B380 )
    return 1;
  else
    return sub_60026DC8(a2);
}

/* ============================================================================
 * Yoshi_ctor
 * RVA 0x007CB7D0   size 0x1B8   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607CB7D0  RVA 0x607CB7D0  size 0x1B8 */
StateActor *__fastcall Yoshi_ctor(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r0

  PlayerBase_ctor(a1, a2);
  a1->_._._.vtable = (int)&off_60C25AB0;
  *(_DWORD *)&a1[1]._.collisionMgr[4608] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4612] = 0;
  sub_607D6354(&a1[1]._.collisionMgr[4616], a1->_._._.settings1 & 0xF, 0);
  v3 = operator new(0x1Cu);
  *(_DWORD *)&a1[1]._.collisionMgr[4632] = sub_603E45E4(v3);
  *(_DWORD *)&a1[1]._.collisionMgr[4636] = &off_60C26018;
  *(_DWORD *)&a1[1]._.collisionMgr[4640] = &off_60C26028;
  *(_DWORD *)&a1[1]._.collisionMgr[4644] = &off_60C2604C;
  *(_DWORD *)&a1[1]._.collisionMgr[4648] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[4652] = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.collisionMgr[4656], (StateExecuter *)&a1[1]._.collisionMgr[4640], &NullState);
  *(_DWORD *)&a1[1]._.collisionMgr[4636] = &off_60C26008;
  *(_DWORD *)&a1[1]._.collisionMgr[4672] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[4716] = 0;
  a1[1]._.collisionMgr[4720] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4724] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4728] = 0;
  a1[1]._.collisionMgr[4732] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4736] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4740] = 0;
  a1[1]._.collisionMgr[4744] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4748] = 0;
  a1[1]._.collisionMgr[4752] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4756] = 0;
  memset(&a1[1]._.collisionMgr[4676], 0, 39);
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4760]);
  *(_DWORD *)&a1[1]._.collisionMgr[4760] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4864]);
  *(_DWORD *)&a1[1]._.collisionMgr[4864] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4968]);
  *(_DWORD *)&a1[1]._.collisionMgr[4968] = off_60BC1450;
  a1->_._.type = 2;
  *(_DWORD *)a1->_.collisionMgr = (char *)a1 + 11364;
  sub_6078B160(PlayerMgr_instance, a1);
  sub_6078B118(PlayerMgr_instance);
  return a1;
}

/* ============================================================================
 * YoshiFlame_YoshiFlame
 * RVA 0x007D2640   size 0x7C   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607D2640  RVA 0x607D2640  size 0x7C */
int __fastcall YoshiFlame_YoshiFlame(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator new(0x320u);
  StageActor_StageActor((StageActor *)v2, a1);
  *(_DWORD *)v2 = &off_60C26158;
  *(_DWORD *)(v2 + 644) = 0;
  *(_DWORD *)(v2 + 648) = 0;
  *(_DWORD *)(v2 + 652) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 656));
  *(_DWORD *)(v2 + 656) = off_60BC1450;
  sub_6000BAC8((_DWORD *)(v2 + 760), *(_DWORD *)(v2 + 8));
  *(_DWORD *)(v2 + 760) = off_60C26124;
  *(_DWORD *)(v2 + 796) = v2;
  return v2;
}

/* ============================================================================
 * BootScene_ctor
 * RVA 0x007DEED0   size 0x150   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607DEED0  RVA 0x607DEED0  size 0x150 */
int __fastcall BootScene_ctor(int a1, int a2)
{
  sead_IDisposer *v3; // r0

  CalculateTask3_ctor(a1, a2, (int)"BootScene");
  *(_DWORD *)a1 = off_60C26504;
  *(_DWORD *)(a1 + 192) = &off_60C265A4;
  *(_DWORD *)(a1 + 196) = &off_60C265B4;
  *(_DWORD *)(a1 + 200) = &off_60C265D8;
  *(_DWORD *)(a1 + 204) = a1;
  *(_DWORD *)(a1 + 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC5774);
  *(_DWORD *)(a1 + 192) = &off_60C26594;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  *(_DWORD *)(a1 + 244) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_248_byte_60ABC94D_DWORD_a1_228_off_60C5E9A4_DWORD_a1_252_0_DWORD_a1_256_0_DWORD_a1_260_1_DWORD_a1_268_0_DWORD_a1_272_0_DWORD_a1_276_0_DWORD_a1_264_off_60BD8394_v3_sead_IDisposer_ctor_sead_IDisposer_a1_296_DWORD_a1_296_off_60C26570_DWORD_a1_312_0_DWORD_a1_316_0_DWORD_a1_320_v3_DWORD_a1_324_0_BYTE_a1_352_0_DWORD_a1_336_a1_DWORD_a1_340_sub_607DF058_DWORD_a1_344_0_DWORD_a1_332_off_60C265F0_DWORD_a1_328_a1_332_sub_6048210C_a1_356_BYTE_a1_3952_0_return_a1_ChallengeResultScene_ctor_RVA_0x007E0EE0_size_0x1BC_xrefs_0_recovered_from_main_i64_Recovered_from_main_idb_VA_0x607E0EE0_RVA_0x607E0EE0_size_0x1BC_int_fastcall_ChallengeResultScene_ctor_int_a1_int_a2_CalculateTask3_ctor_a1_a2_int_ChallengeResultScene_DWORD_a1_off_60C2670C_sub_6090A654_DWORD_a1_192_sub_6090C6DC_a1_280_DWORD_a1_452_off_60C2679C_DWORD_a1_456_off_60C267AC_DWORD_a1_460_off_60C267D0_DWORD_a1_464_a1_DWORD_a1_468_0_StateMgr_ctor_StateMgr_a1_472_StateExecuter_a1_456_StateBase_dword_60CC58C4_DWORD_a1_452_off_60C2678C_sead_IDisposer_ctor_sead_IDisposer_a1_488_DWORD_a1_504_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 508) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 488) = off_60C5E9A4;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 520) = 1;
  *(_DWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 524) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 556));
  *(_DWORD *)(a1 + 572) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_576_byte_60ABC94D_DWORD_a1_556_off_60C5E9A4_DWORD_a1_580_0_DWORD_a1_584_0_DWORD_a1_588_1_DWORD_a1_596_0_DWORD_a1_600_0_DWORD_a1_604_0_DWORD_a1_592_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_624_DWORD_a1_640_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 644) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 624) = off_60C5E9A4;
  *(_DWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 652) = 0;
  *(_DWORD *)(a1 + 656) = 1;
  *(_DWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 668) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  *(_DWORD *)(a1 + 660) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 692));
  sub_6090C6DC(a1 + 780);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_60520BB0(a1 + 2972);
  sub_60523680(a1 + 7296);
  *(_DWORD *)(a1 + 10852) = 0;
  return a1;
}

/* ============================================================================
 * ChallengeRetryScene_ctor
 * RVA 0x007E1C78   size 0x150   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607E1C78  RVA 0x607E1C78  size 0x150 */
int __fastcall ChallengeRetryScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ChallengeRetryScene");
  *(_DWORD *)a1 = off_60C26824;
  sub_6090A654((_DWORD *)(a1 + 192));
  sub_6090C6DC(a1 + 280);
  *(_DWORD *)(a1 + 452) = &off_60C268B4;
  *(_DWORD *)(a1 + 456) = &off_60C268C4;
  *(_DWORD *)(a1 + 460) = &off_60C268E8;
  *(_DWORD *)(a1 + 464) = a1;
  *(_DWORD *)(a1 + 468) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 472), (StateExecuter *)(a1 + 456), (StateBase *)&dword_60CC59B0);
  *(_DWORD *)(a1 + 452) = &off_60C268A4;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 488));
  *(_DWORD *)(a1 + 504) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_508_byte_60ABC94D_DWORD_a1_488_off_60C5E9A4_DWORD_a1_512_0_DWORD_a1_516_0_DWORD_a1_520_1_DWORD_a1_528_0_DWORD_a1_532_0_DWORD_a1_536_0_DWORD_a1_524_off_60BD8394_sub_6090A654_DWORD_a1_556_sub_6090C6DC_a1_644_sub_6045BF30_sub_6045BF30_sub_6045BF30_sub_6045BF30_sub_6045BF30_sub_60485A74_a1_2836_DWORD_a1_3448_0_return_a1_DarkCloudDemoScene_ctor_RVA_0x007E3508_size_0x13C_xrefs_0_recovered_from_main_i64_Recovered_from_main_idb_VA_0x607E3508_RVA_0x607E3508_size_0x13C_sead_IDisposer_fastcall_DarkCloudDemoScene_ctor_sead_IDisposer_a1_int_a2_CalculateTask3_ctor_int_a1_a2_int_DarkCloudDemoScene_a1_vtable_int_off_60C26AE0_sead_IDisposer_ctor_a1_12_a1_13_vtable_int_vtable_forsead_SafeStringBase<char>;
  a1[13].containingHeap = (int)&byte_60ABC94D;
  a1[12].vtable = (int)off_60C5E9A4;
  a1[13].field_8 = 0;
  a1[13].field_C = 0;
  a1[14].vtable = 1;
  a1[14].field_8 = 0;
  a1[14].field_C = 0;
  a1[15].vtable = 0;
  a1[14].containingHeap = (int)off_60BD8394;
  a1[16].containingHeap = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  a1[143].vtable = 1065353216;
  a1[143].containingHeap = 0;
  a1[143].field_8 = 0;
  a1[143].field_C = 0;
  a1[144].vtable = 0;
  a1[144].containingHeap = 1065353216;
  a1[144].field_8 = 0;
  a1[144].field_C = 0;
  a1[145].vtable = 0;
  a1[145].containingHeap = 0;
  a1[145].field_8 = 1065353216;
  a1[145].field_C = 0;
  a1[142].field_C = (int)off_60C5D014;
  a1[148].vtable = 0;
  a1[146].vtable = 0;
  a1[146].containingHeap = 0;
  a1[146].field_8 = 1092616192;
  a1[146].field_C = 0;
  a1[147].vtable = 0;
  a1[147].containingHeap = 0;
  a1[147].field_8 = 0;
  a1[147].field_C = 1065353216;
  sub_6090C214(&a1[148].containingHeap);
  a1[159].field_C = 0;
  a1[160].vtable = 0;
  a1[160].containingHeap = 0;
  return a1;
}

/* ============================================================================
 * DemoScene_ctor
 * RVA 0x007E4F40   size 0x4F0   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607E4F40  RVA 0x607E4F40  size 0x4F0 */
int __fastcall DemoScene_ctor(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  int v5; // r6
  int v6; // r5

  CalculateTask3_ctor(a1, a2, (int)"DemoScene");
  *(_DWORD *)a1 = off_60C26B88;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 192));
  v3 = 0;
  *(_DWORD *)(a1 + 208) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_212_byte_60ABC94D_DWORD_a1_192_off_60C5E9A4_DWORD_a1_216_0_DWORD_a1_220_0_DWORD_a1_224_1_DWORD_a1_232_0_DWORD_a1_236_0_DWORD_a1_240_0_DWORD_a1_228_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_260_DWORD_a1_276_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 280) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 260) = off_60C5E9A4;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 1;
  *(_DWORD *)(a1 + 296) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 328));
  *(_DWORD *)(a1 + 344) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_348_byte_60ABC94D_DWORD_a1_328_off_60C5E9A4_DWORD_a1_352_0_DWORD_a1_368_0_DWORD_a1_372_0_DWORD_a1_376_0_DWORD_a1_356_0_DWORD_a1_360_1_DWORD_a1_364_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_396_DWORD_a1_412_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 416) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 396) = off_60C5E9A4;
  *(_DWORD *)(a1 + 420) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 444) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 428) = 1;
  *(_DWORD *)(a1 + 432) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 464));
  *(_DWORD *)(a1 + 480) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_484_byte_60ABC94D_DWORD_a1_464_off_60C5E9A4_DWORD_a1_488_0_DWORD_a1_504_0_DWORD_a1_508_0_DWORD_a1_512_0_DWORD_a1_492_0_DWORD_a1_496_1_DWORD_a1_500_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_532_DWORD_a1_548_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 552) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 532) = off_60C5E9A4;
  *(_DWORD *)(a1 + 556) = 0;
  *(_DWORD *)(a1 + 572) = 0;
  *(_DWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 580) = 0;
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 1;
  *(_DWORD *)(a1 + 568) = off_60BD8394;
  *(_DWORD *)(a1 + 600) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6090C6DC(a1 + 2624);
  sub_6090A654((_DWORD *)(a1 + 2796));
  *(_DWORD *)(a1 + 2888) = 1065353216;
  *(_DWORD *)(a1 + 2892) = 0;
  *(_DWORD *)(a1 + 2896) = 0;
  *(_DWORD *)(a1 + 2900) = 0;
  *(_DWORD *)(a1 + 2904) = 0;
  *(_DWORD *)(a1 + 2908) = 1065353216;
  *(_DWORD *)(a1 + 2912) = 0;
  *(_DWORD *)(a1 + 2916) = 0;
  *(_DWORD *)(a1 + 2920) = 0;
  *(_DWORD *)(a1 + 2924) = 0;
  *(_DWORD *)(a1 + 2928) = 1065353216;
  *(_DWORD *)(a1 + 2932) = 0;
  *(_DWORD *)(a1 + 2884) = off_60C5D014;
  *(_DWORD *)(a1 + 2968) = 0;
  *(_DWORD *)(a1 + 2936) = 0;
  *(_DWORD *)(a1 + 2940) = 0;
  *(_DWORD *)(a1 + 2944) = 1092616192;
  *(_DWORD *)(a1 + 2948) = 0;
  *(_DWORD *)(a1 + 2952) = 0;
  *(_DWORD *)(a1 + 2956) = 0;
  *(_DWORD *)(a1 + 2960) = 0;
  *(_DWORD *)(a1 + 2964) = 1065353216;
  sub_6090A654((_DWORD *)(a1 + 2972));
  sub_6090C6DC(a1 + 3060);
  sub_6090C344(a1 + 3232);
  *(_DWORD *)(a1 + 3936) = 0;
  *(_DWORD *)(a1 + 3416) = 0;
  *(_DWORD *)(a1 + 3420) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 3940));
  *(_DWORD *)(a1 + 3956) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_3960_byte_60ABC94D_DWORD_a1_3940_off_60C5E9A4_DWORD_a1_3964_0_DWORD_a1_3968_0_DWORD_a1_3972_1_DWORD_a1_3980_0_DWORD_a1_3984_0_DWORD_a1_3988_0_DWORD_a1_3976_off_60BD8394_v4_a1_20780_do_EffectWrapper_ctor_EffectWrapper_v4_v3_DWORD_v4_v3_off_60BC1450_v3_104_while_v3_425984_v5_0_v6_a1_463408_do_MovingSoundActor_ctor_MovingSoundActor_v6_v5_0_1_DWORD_v6_v5_off_60C26BF4_v5_308_while_v5_1261568_DWORD_a1_1725004_0_DWORD_a1_1725028_0_DWORD_a1_1725024_0_DWORD_a1_1725020_0_DWORD_a1_1725032_1065353216_DWORD_a1_1725036_dword_6086A208_DWORD_a1_1725064_0_DWORD_a1_1725060_0_DWORD_a1_1725056_0_DWORD_a1_1725052_0_DWORD_a1_1725048_0_DWORD_a1_1725044_0_DWORD_a1_1725040_0_DWORD_a1_1725016_a1_1725020_DWORD_a1_1725068_0_DWORD_a1_1725012_off_60C5A7FC_DWORD_a1_1725072_0_DWORD_a1_1725076_0_DWORD_a1_1725100_0_DWORD_a1_1725096_0_DWORD_a1_1725092_0_DWORD_a1_1725104_1065353216_DWORD_a1_1725108_dword_6086A208_DWORD_a1_1725136_0_DWORD_a1_1725132_0_DWORD_a1_1725128_0_DWORD_a1_1725124_0_DWORD_a1_1725120_0_DWORD_a1_1725116_0_DWORD_a1_1725112_0_DWORD_a1_1725088_a1_1725092_DWORD_a1_1725140_0_DWORD_a1_1725084_off_60C5A7FC_DWORD_a1_1725144_0_sub_6092D040_a1_1725152_DWORD_a1_1729180_0_DWORD_a1_1729184_0_return_a1_GameOverScene_ctor_RVA_0x007EC020_size_0xFC_xrefs_0_recovered_from_main_i64_Recovered_from_main_idb_VA_0x607EC020_RVA_0x607EC020_size_0xFC_int_fastcall_GameOverScene_ctor_int_a1_int_a2_CalculateTask3_ctor_a1_a2_int_GameOverScene_DWORD_a1_off_60C26DA4_DWORD_a1_192_off_60C26E34_DWORD_a1_196_off_60C26E44_DWORD_a1_200_off_60C26E68_DWORD_a1_204_a1_DWORD_a1_208_0_StateMgr_ctor_StateMgr_a1_212_StateExecuter_a1_196_StateBase_dword_60CC5B5C_DWORD_a1_192_off_60C26E24_sead_IDisposer_ctor_sead_IDisposer_a1_228_DWORD_a1_244_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 248) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 228) = off_60C5E9A4;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 1;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 264) = off_60BD8394;
  sub_604E3564(a1 + 296);
  *(_DWORD *)(a1 + 20824) = 0;
  return a1;
}

/* ============================================================================
 * GameSetupScene_ctor
 * RVA 0x007ED9D8   size 0x238   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607ED9D8  RVA 0x607ED9D8  size 0x238 */
int __fastcall GameSetupScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"GameSetupScene");
  *(_DWORD *)a1 = off_60C26EBC;
  *(_BYTE *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = &off_60C26F4C;
  *(_DWORD *)(a1 + 200) = &off_60C26F5C;
  *(_DWORD *)(a1 + 204) = &off_60C26F80;
  *(_DWORD *)(a1 + 208) = a1;
  *(_DWORD *)(a1 + 212) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 216), (StateExecuter *)(a1 + 200), (StateBase *)&dword_60CC5BAC);
  *(_DWORD *)(a1 + 196) = &off_60C26F3C;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 232));
  *(_DWORD *)(a1 + 248) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_252_byte_60ABC94D_DWORD_a1_232_off_60C5E9A4_DWORD_a1_256_0_DWORD_a1_260_0_DWORD_a1_264_1_DWORD_a1_272_0_DWORD_a1_276_0_DWORD_a1_280_0_DWORD_a1_268_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_300_DWORD_a1_300_off_60C5E9A4_DWORD_a1_316_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 320) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 1;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 336) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 368));
  *(_DWORD *)(a1 + 368) = off_60C5E9A4;
  *(_DWORD *)(a1 + 384) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_388_byte_60ABC94D_DWORD_a1_392_0_DWORD_a1_396_0_DWORD_a1_400_1_DWORD_a1_408_0_DWORD_a1_412_0_DWORD_a1_416_0_DWORD_a1_404_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_436_DWORD_a1_436_off_60C5E9A4_DWORD_a1_452_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 456) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 468) = 1;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 484) = 0;
  *(_DWORD *)(a1 + 472) = off_60BD8394;
  *(_DWORD *)(a1 + 508) = 1065353216;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  *(_DWORD *)(a1 + 528) = 1065353216;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 544) = 0;
  *(_DWORD *)(a1 + 548) = 1065353216;
  *(_DWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 504) = off_60C5D014;
  *(_DWORD *)(a1 + 588) = 0;
  *(_DWORD *)(a1 + 556) = 0;
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 1092616192;
  *(_DWORD *)(a1 + 568) = 0;
  *(_DWORD *)(a1 + 572) = 0;
  *(_DWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 580) = 0;
  *(_DWORD *)(a1 + 584) = 1065353216;
  sub_6090C214(a1 + 592);
  sub_6090A654((_DWORD *)(a1 + 776));
  sub_6090C6DC(a1 + 864);
  sub_6055B894(a1 + 1060);
  sub_60515690(a1 + 14376);
  sub_60556930(a1 + 44352);
  sub_60542880(a1 + 63184);
  *(_WORD *)(a1 + 66760) = 0;
  *(_BYTE *)(a1 + 66762) = 0;
  return a1;
}

/* ============================================================================
 * MultiPlayCourseSelectScene_ctor
 * RVA 0x007F1B88   size 0x1F8   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F1B88  RVA 0x607F1B88  size 0x1F8 */
int __fastcall MultiPlayCourseSelectScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"MultiPlayCourseSelectScene");
  *(_DWORD *)a1 = off_60C27420;
  *(_DWORD *)(a1 + 192) = &off_60C274B0;
  *(_DWORD *)(a1 + 196) = &off_60C274C0;
  *(_DWORD *)(a1 + 200) = &off_60C274E4;
  *(_DWORD *)(a1 + 204) = a1;
  *(_DWORD *)(a1 + 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC5F28);
  *(_DWORD *)(a1 + 192) = &off_60C274A0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  *(_DWORD *)(a1 + 244) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_248_byte_60ABC94D_DWORD_a1_228_off_60C5E9A4_DWORD_a1_252_0_DWORD_a1_256_0_DWORD_a1_260_1_DWORD_a1_268_0_DWORD_a1_272_0_DWORD_a1_276_0_DWORD_a1_264_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_296_DWORD_a1_296_off_60C5E9A4_DWORD_a1_312_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 316) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 1;
  *(_DWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 332) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 364));
  *(_DWORD *)(a1 + 364) = off_60C5E9A4;
  *(_DWORD *)(a1 + 380) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_384_byte_60ABC94D_DWORD_a1_388_0_DWORD_a1_392_0_DWORD_a1_396_1_DWORD_a1_404_0_DWORD_a1_408_0_DWORD_a1_412_0_DWORD_a1_400_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_432_DWORD_a1_432_off_60C5E9A4_DWORD_a1_448_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 452) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 1;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 468) = off_60BD8394;
  *(_DWORD *)(a1 + 504) = 1065353216;
  *(_DWORD *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 1065353216;
  *(_DWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 544) = 1065353216;
  *(_DWORD *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 500) = off_60C5D014;
  *(_DWORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 556) = 0;
  *(_DWORD *)(a1 + 560) = 1092616192;
  *(_DWORD *)(a1 + 564) = 0;
  *(_DWORD *)(a1 + 568) = 0;
  *(_DWORD *)(a1 + 572) = 0;
  *(_DWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 580) = 1065353216;
  sub_6090C214(a1 + 588);
  sub_6090A654((_DWORD *)(a1 + 772));
  sub_6090C6DC(a1 + 860);
  sub_6045BF30();
  *(_DWORD *)(a1 + 1460) = 0;
  return a1;
}

/* ============================================================================
 * ResultScene_ctor
 * RVA 0x007F4BFC   size 0x250   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F4BFC  RVA 0x607F4BFC  size 0x250 */
int __fastcall ResultScene_ctor(int a1, int a2)
{
  CalculateTask3_ctor(a1, a2, (int)"ResultScene");
  *(_DWORD *)a1 = off_60C276C0;
  *(_DWORD *)(a1 + 192) = &off_60C27750;
  *(_DWORD *)(a1 + 196) = &off_60C27760;
  *(_DWORD *)(a1 + 200) = &off_60C27784;
  *(_DWORD *)(a1 + 204) = a1;
  *(_DWORD *)(a1 + 208) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 212), (StateExecuter *)(a1 + 196), (StateBase *)&dword_60CC6260);
  *(_DWORD *)(a1 + 192) = &off_60C27740;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 228));
  *(_DWORD *)(a1 + 244) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_248_byte_60ABC94D_DWORD_a1_228_off_60C5E9A4_DWORD_a1_252_0_DWORD_a1_256_0_DWORD_a1_260_1_DWORD_a1_268_0_DWORD_a1_272_0_DWORD_a1_276_0_DWORD_a1_264_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_296_DWORD_a1_312_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 316) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 296) = off_60C5E9A4;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 1;
  *(_DWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 332) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 364));
  *(_DWORD *)(a1 + 380) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_384_byte_60ABC94D_DWORD_a1_364_off_60C5E9A4_DWORD_a1_388_0_DWORD_a1_392_0_DWORD_a1_396_1_DWORD_a1_404_0_DWORD_a1_408_0_DWORD_a1_412_0_DWORD_a1_400_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_432_DWORD_a1_448_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 452) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 432) = off_60C5E9A4;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 1;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 468) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 500));
  *(_DWORD *)(a1 + 516) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_520_byte_60ABC94D_DWORD_a1_500_off_60C5E9A4_DWORD_a1_524_0_DWORD_a1_528_0_DWORD_a1_532_1_DWORD_a1_540_0_DWORD_a1_544_0_DWORD_a1_548_0_DWORD_a1_536_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_568_DWORD_a1_584_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 588) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 568) = off_60C5E9A4;
  *(_DWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 596) = 0;
  *(_DWORD *)(a1 + 600) = 1;
  *(_DWORD *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 612) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_DWORD *)(a1 + 604) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 636));
  *(_DWORD *)(a1 + 652) = &g_vtable_for_sead_SafeStringBase_char_DWORD_a1_656_byte_60ABC94D_DWORD_a1_636_off_60C5E9A4_DWORD_a1_660_0_DWORD_a1_664_0_DWORD_a1_668_1_DWORD_a1_676_0_DWORD_a1_680_0_DWORD_a1_684_0_DWORD_a1_672_off_60BD8394_sead_IDisposer_ctor_sead_IDisposer_a1_704_DWORD_a1_720_vtable_forsead_SafeStringBase<char>;
  *(_DWORD *)(a1 + 724) = &byte_60ABC94D;
  *(_DWORD *)(a1 + 704) = off_60C5E9A4;
  *(_DWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 732) = 0;
  *(_DWORD *)(a1 + 736) = 1;
  *(_DWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 752) = 0;
  *(_DWORD *)(a1 + 740) = off_60BD8394;
  sub_6090A654((_DWORD *)(a1 + 772));
  sub_6090C6DC(a1 + 860);
  *(_DWORD *)(a1 + 1036) = 0;
  return a1;
}

/* ============================================================================
 * CalculateTask3_ctor
 * RVA 0x007F5AD8   size 0x1C   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F5AD8  RVA 0x607F5AD8  size 0x1C */
sead_IDisposer *__fastcall CalculateTask3_ctor(sead_IDisposer *a1, int a2, int a3)
{
  sead_IDisposer *result; // r0

  result = CalculateTask2_ctor(a1, a2, a3);
  result->vtable = (int)off_60C27800;
  return result;
}

/* ============================================================================
 * SceneMgr_doSceneChange
 * RVA 0x007F5FF8   size 0x30   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F5FF8  RVA 0x607F5FF8  size 0x30 */
signed int __fastcall SceneMgr_doSceneChange(int a1, int a2, int *a3, int a4, int a5)
{
  signed int v6; // r1
  signed int result; // r0

  v6 = sub_607F6028(a1, a2, (int)a3, a4);
  result = 0;
  if ( v6 == 1 )
  {
    sub_60023CB0(a3);
    return 1;
  }
  return result;
}

/* ============================================================================
 * TitleScene_ctor
 * RVA 0x007F89C4   size 0x24   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x607F89C4  RVA 0x607F89C4  size 0x24 */
sead_IDisposer *__fastcall TitleScene_ctor(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask3_ctor(a1, a2, (int)"TitleScene");
  result->vtable = (int)off_60C27B24;
  return result;
}

/* ============================================================================
 * _nnmusl_init_dso
 * RVA 0x009AD3D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD3D0  RVA 0x609AD3D0  size 0xC */
int __fastcall _nnmusl_init_dso(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  return __nnmusl_init_dso(a1, a2, a3, a4);
}

/* ============================================================================
 * _nnmusl_fini_dso
 * RVA 0x009AD3DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD3DC  RVA 0x609AD3DC  size 0xC */
int _nnmusl_fini_dso()
{
  return __nnmusl_fini_dso();
}

/* ============================================================================
 * _cxa_guard_acquire
 * RVA 0x009AD3E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD3E8  RVA 0x609AD3E8  size 0xC */
int __cdecl _cxa_guard_acquire(__guard *a1)
{
  return __cxa_guard_acquire(a1);
}

/* ============================================================================
 * _cxa_guard_release
 * RVA 0x009AD3F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD3F4  RVA 0x609AD3F4  size 0xC */
void __cdecl _cxa_guard_release(__guard *a1)
{
  __cxa_guard_release(a1);
}

/* ============================================================================
 * _aeabi_memclr4
 * RVA 0x009AD400   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD400  RVA 0x609AD400  size 0xC */
void __fastcall _aeabi_memclr4(void *ptr, size_t len)
{
  memset(ptr, 0, len);
}

/* ============================================================================
 * _aeabi_memset
 * RVA 0x009AD40C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD40C  RVA 0x609AD40C  size 0xC */
void __fastcall _aeabi_memset(void *a1, size_t a2, int a3)
{
  memset(a1, a3, a2);
}

/* ============================================================================
 * _aeabi_memclr
 * RVA 0x009AD418   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD418  RVA 0x609AD418  size 0xC */
void __fastcall _aeabi_memclr(void *a1, size_t a2)
{
  memset(a1, 0, a2);
}

/* ============================================================================
 * _aeabi_memclr8
 * RVA 0x009AD424   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD424  RVA 0x609AD424  size 0xC */
int __fastcall _aeabi_memclr8(void *a1, size_t a2)
{
  int result; // r0

  memset(a1, 0, a2);
  return result;
}

/* ============================================================================
 * nn_os_GetSystemTick
 * RVA 0x009AD430   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD430  RVA 0x609AD430  size 0xC */
int __fastcall nn_os_GetSystemTick(nn_os *v)
{
  return __imp__ZN2nn2os13GetSystemTickEv(v);
}

/* ============================================================================
 * sqrtf
 * RVA 0x009AD43C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD43C  RVA 0x609AD43C  size 0xC */
float sqrtf(float x)
{
  return __imp_sqrtf(x);
}

/* ============================================================================
 * fmod
 * RVA 0x009AD448   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD448  RVA 0x609AD448  size 0xC */
double fmod(double x, double y)
{
  return __imp_fmod(x, y);
}

/* ============================================================================
 * _aeabi_memcpy
 * RVA 0x009AD454   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD454  RVA 0x609AD454  size 0xC */
void __fastcall _aeabi_memcpy(void *a1, const void *a2, size_t a3)
{
  qmemcpy(a1, a2, a3);
}

/* ============================================================================
 * _cxa_pure_virtual
 * RVA 0x009AD460   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD460  RVA 0x609AD460  size 0xC */
void __noreturn _cxa_pure_virtual(void)
{
  __cxa_pure_virtual();
}

/* ============================================================================
 * acosf
 * RVA 0x009AD46C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD46C  RVA 0x609AD46C  size 0xC */
float acosf(float x)
{
  return __imp_acosf(x);
}

/* ============================================================================
 * cosf
 * RVA 0x009AD478   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD478  RVA 0x609AD478  size 0xC */
float cosf(float x)
{
  return __imp_cosf(x);
}

/* ============================================================================
 * sinf
 * RVA 0x009AD484   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD484  RVA 0x609AD484  size 0xC */
float sinf(float x)
{
  return __imp_sinf(x);
}

/* ============================================================================
 * _aeabi_memcpy4
 * RVA 0x009AD490   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD490  RVA 0x609AD490  size 0xC */
void __fastcall _aeabi_memcpy4(void *a1, const void *a2, size_t a3)
{
  qmemcpy(a1, a2, a3);
}

/* ============================================================================
 * _aeabi_f2lz
 * RVA 0x009AD49C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD49C  RVA 0x609AD49C  size 0xC */
__int64 __fastcall _aeabi_f2lz(int a1)
{
  return (__int64)*(float *)&a1;
}

/* ============================================================================
 * _aeabi_memmove
 * RVA 0x009AD4A8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4A8  RVA 0x609AD4A8  size 0xC */
void __fastcall _aeabi_memmove(void *a1, const void *a2, size_t a3)
{
  memmove(a1, a2, a3);
}

/* ============================================================================
 * _aeabi_memset4
 * RVA 0x009AD4B4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4B4  RVA 0x609AD4B4  size 0xC */
void __fastcall _aeabi_memset4(void *a1, size_t a2, int a3)
{
  memset(a1, a3, a2);
}

/* ============================================================================
 * strcmp
 * RVA 0x009AD4C0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4C0  RVA 0x609AD4C0  size 0xC */
int strcmp(const char *s1, const char *s2)
{
  return __imp_strcmp(s1, s2);
}

/* ============================================================================
 * nn_os_GetTlsValue
 * RVA 0x009AD4CC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4CC  RVA 0x609AD4CC  size 0xC */
int nn_os_GetTlsValue()
{
  return __imp__ZN2nn2os11GetTlsValueENS0_7TlsSlotE();
}

/* ============================================================================
 * nn_os_GetCurrentCoreNumber
 * RVA 0x009AD4D8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4D8  RVA 0x609AD4D8  size 0xC */
int __fastcall nn_os_GetCurrentCoreNumber(nn_os *v)
{
  return __imp__ZN2nn2os20GetCurrentCoreNumberEv(v);
}

/* ============================================================================
 * strlen
 * RVA 0x009AD4E4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4E4  RVA 0x609AD4E4  size 0xC */
size_t strlen(const char *s)
{
  return __imp_strlen(s);
}

/* ============================================================================
 * memcmp
 * RVA 0x009AD4F0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4F0  RVA 0x609AD4F0  size 0xC */
int memcmp(const void *s1, const void *s2, size_t n)
{
  return __imp_memcmp(s1, s2, n);
}

/* ============================================================================
 * _aeabi_ldivmod
 * RVA 0x009AD4FC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD4FC  RVA 0x609AD4FC  size 0xC */
__int64 __fastcall _aeabi_ldivmod(__int64 a1, __int64 a2)
{
  return a1 / a2;
}

/* ============================================================================
 * _aeabi_uldivmod
 * RVA 0x009AD508   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD508  RVA 0x609AD508  size 0xC */
unsigned __int64 __fastcall _aeabi_uldivmod(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 / a2;
}

/* ============================================================================
 * strncmp
 * RVA 0x009AD514   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD514  RVA 0x609AD514  size 0xC */
int strncmp(const char *s1, const char *s2, size_t n)
{
  return __imp_strncmp(s1, s2, n);
}

/* ============================================================================
 * tanf
 * RVA 0x009AD520   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD520  RVA 0x609AD520  size 0xC */
float tanf(float x)
{
  return __imp_tanf(x);
}

/* ============================================================================
 * fmodf
 * RVA 0x009AD52C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD52C  RVA 0x609AD52C  size 0xC */
float fmodf(float x, float y)
{
  return __imp_fmodf(x, y);
}

/* ============================================================================
 * nn_diag_detail_OnAssertionFailure
 * RVA 0x009AD538   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD538  RVA 0x609AD538  size 0xC */
int nn_diag_detail_OnAssertionFailure()
{
  return __imp__ZN2nn4diag6detail18OnAssertionFailureENS0_13AssertionTypeEPKcS4_S4_i();
}

/* ============================================================================
 * atan2f
 * RVA 0x009AD544   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD544  RVA 0x609AD544  size 0xC */
float atan2f(float y, float x)
{
  return __imp_atan2f(y, x);
}

/* ============================================================================
 * _aeabi_memcpy8
 * RVA 0x009AD550   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD550  RVA 0x609AD550  size 0xC */
void __fastcall _aeabi_memcpy8(void *a1, const void *a2, size_t a3)
{
  qmemcpy(a1, a2, a3);
}

/* ============================================================================
 * nn_hid_SwapNpadAssignment
 * RVA 0x009AD55C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD55C  RVA 0x609AD55C  size 0xC */
int __fastcall nn_hid_SwapNpadAssignment(nn_hid *v, const unsigned int *a2, const unsigned int *a3)
{
  return __imp__ZN2nn3hid18SwapNpadAssignmentERKjS2_(v, a2, a3);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_GetFirstBlock
 * RVA 0x009AD568   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD568  RVA 0x609AD568  size 0xC */
int __fastcall nn_util_BinaryFileHeader_GetFirstBlock(nn_util_BinaryFileHeader *v)
{
  return __imp__ZN2nn4util16BinaryFileHeader13GetFirstBlockEv(v);
}

/* ============================================================================
 * nn_mii_GetExpressionCount
 * RVA 0x009AD574   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD574  RVA 0x609AD574  size 0xC */
int __fastcall nn_mii_GetExpressionCount(nn_mii *v, int a2)
{
  return __imp__ZN2nn3mii18GetExpressionCountEi(v, a2);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_CharInfoAccessor
 * RVA 0x009AD580   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD580  RVA 0x609AD580  size 0xC */
int nn_mii_CharInfoAccessor_CharInfoAccessor()
{
  return __imp__ZN2nn3mii16CharInfoAccessorC1ERKNS0_8CharInfoE();
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_GetGender
 * RVA 0x009AD58C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD58C  RVA 0x609AD58C  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_GetGender(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor9GetGenderEv(v);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_GetFavoriteColor
 * RVA 0x009AD598   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD598  RVA 0x609AD598  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_GetFavoriteColor(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor16GetFavoriteColorEv(v);
}

/* ============================================================================
 * nn_mii_GetFavoriteColor
 * RVA 0x009AD5A4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5A4  RVA 0x609AD5A4  size 0xC */
int nn_mii_GetFavoriteColor()
{
  return __imp__ZN2nn3mii16GetFavoriteColorENS0_13FavoriteColorENS0_9GammaTypeE();
}

/* ============================================================================
 * _aeabi_memset8
 * RVA 0x009AD5B0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5B0  RVA 0x609AD5B0  size 0xC */
void __fastcall _aeabi_memset8(void *a1, size_t a2, int a3)
{
  memset(a1, a3, a2);
}

/* ============================================================================
 * nn_mii_Database_Database
 * RVA 0x009AD5BC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5BC  RVA 0x609AD5BC  size 0xC */
int __fastcall nn_mii_Database_Database(nn_mii_Database *v)
{
  return __imp__ZN2nn3mii8DatabaseC1Ev(v);
}

/* ============================================================================
 * nn_mii_Database_Initialize
 * RVA 0x009AD5C8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5C8  RVA 0x609AD5C8  size 0xC */
int __fastcall nn_mii_Database_Initialize(nn_mii_Database *v)
{
  return __imp__ZN2nn3mii8Database10InitializeEv(v);
}

/* ============================================================================
 * nn_mii_Database_Get
 * RVA 0x009AD5D4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5D4  RVA 0x609AD5D4  size 0xC */
int nn_mii_Database_Get()
{
  return __imp__ZN2nn3mii8Database3GetEPiPNS0_15CharInfoElementEii();
}

/* ============================================================================
 * nn_mii_Database_BuildRandom
 * RVA 0x009AD5E0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5E0  RVA 0x609AD5E0  size 0xC */
int nn_mii_Database_BuildRandom()
{
  return __imp__ZN2nn3mii8Database11BuildRandomEPNS0_8CharInfoERKNS0_10RandomDescE();
}

/* ============================================================================
 * nn_mii_Database_Finalize
 * RVA 0x009AD5EC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD5EC  RVA 0x609AD5EC  size 0xC */
int __fastcall nn_mii_Database_Finalize(nn_mii_Database *v)
{
  return __imp__ZN2nn3mii8Database8FinalizeEv(v);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_IsValid
 * RVA 0x009AD604   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD604  RVA 0x609AD604  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_IsValid(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor7IsValidEv(v);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_GetHeight
 * RVA 0x009AD610   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD610  RVA 0x609AD610  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_GetHeight(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor9GetHeightEv(v);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_GetBuild
 * RVA 0x009AD61C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD61C  RVA 0x609AD61C  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_GetBuild(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor8GetBuildEv(v);
}

/* ============================================================================
 * nn_mii_CharInfoAccessor_GetSkinColor
 * RVA 0x009AD628   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD628  RVA 0x609AD628  size 0xC */
int __fastcall nn_mii_CharInfoAccessor_GetSkinColor(nn_mii_CharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii16CharInfoAccessor12GetSkinColorEv(v);
}

/* ============================================================================
 * nn_mii_GetSkinColor
 * RVA 0x009AD634   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD634  RVA 0x609AD634  size 0xC */
int nn_mii_GetSkinColor()
{
  return __imp__ZN2nn3mii12GetSkinColorEiNS0_9GammaTypeE();
}

/* ============================================================================
 * nn_hid_ShowControllerSupport
 * RVA 0x009AD64C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD64C  RVA 0x609AD64C  size 0xC */
int nn_hid_ShowControllerSupport()
{
  return __imp__ZN2nn3hid21ShowControllerSupportEPNS0_27ControllerSupportResultInfoERKNS0_20ControllerSupportArgE();
}

/* ============================================================================
 * nn_os_QueryMemoryInfo
 * RVA 0x009AD658   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD658  RVA 0x609AD658  size 0xC */
int __fastcall nn_os_QueryMemoryInfo(int a1)
{
  return __imp__ZN2nn2os15QueryMemoryInfoEPNS0_10MemoryInfoE(a1);
}

/* ============================================================================
 * nn_os_SetMemoryHeapSize
 * RVA 0x009AD664   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD664  RVA 0x609AD664  size 0xC */
int __fastcall nn_os_SetMemoryHeapSize(unsigned int a1)
{
  return __imp__ZN2nn2os17SetMemoryHeapSizeEj(a1);
}

/* ============================================================================
 * nn_os_AllocateMemoryBlock
 * RVA 0x009AD670   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD670  RVA 0x609AD670  size 0xC */
int __fastcall nn_os_AllocateMemoryBlock(nn_os *v, unsigned int *a2, unsigned int a3)
{
  return __imp__ZN2nn2os19AllocateMemoryBlockEPjj(v, a2, a3);
}

/* ============================================================================
 * nn_os_GetHostArgc
 * RVA 0x009AD67C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD67C  RVA 0x609AD67C  size 0xC */
int __fastcall nn_os_GetHostArgc(nn_os *v)
{
  return __imp__ZN2nn2os11GetHostArgcEv(v);
}

/* ============================================================================
 * nn_os_GetHostArgv
 * RVA 0x009AD688   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD688  RVA 0x609AD688  size 0xC */
int __fastcall nn_os_GetHostArgv(nn_os *v)
{
  return __imp__ZN2nn2os11GetHostArgvEv(v);
}

/* ============================================================================
 * nn_oe_Initialize
 * RVA 0x009AD694   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD694  RVA 0x609AD694  size 0xC */
int __fastcall nn_oe_Initialize(nn_oe *v)
{
  return __imp__ZN2nn2oe10InitializeEv(v);
}

/* ============================================================================
 * nn_oe_SetPerformanceConfiguration
 * RVA 0x009AD6A0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6A0  RVA 0x609AD6A0  size 0xC */
int nn_oe_SetPerformanceConfiguration()
{
  return __imp__ZN2nn2oe27SetPerformanceConfigurationENS0_15PerformanceModeEi();
}

/* ============================================================================
 * nn_oe_SetFocusHandlingMode
 * RVA 0x009AD6AC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6AC  RVA 0x609AD6AC  size 0xC */
int nn_oe_SetFocusHandlingMode()
{
  return __imp__ZN2nn2oe20SetFocusHandlingModeENS0_17FocusHandlingModeE();
}

/* ============================================================================
 * powf
 * RVA 0x009AD6B8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6B8  RVA 0x609AD6B8  size 0xC */
float powf(float x, float y)
{
  return __imp_powf(x, y);
}

/* ============================================================================
 * nn_prepo_PlayReport_PlayReport
 * RVA 0x009AD6C4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6C4  RVA 0x609AD6C4  size 0xC */
int __fastcall nn_prepo_PlayReport_PlayReport(nn_prepo_PlayReport *v)
{
  return __imp__ZN2nn5prepo10PlayReportC1Ev(v);
}

/* ============================================================================
 * nn_prepo_PlayReport_SetBuffer
 * RVA 0x009AD6D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6D0  RVA 0x609AD6D0  size 0xC */
int __fastcall nn_prepo_PlayReport_SetBuffer(nn_prepo_PlayReport *v, void *a2, unsigned int a3)
{
  return __imp__ZN2nn5prepo10PlayReport9SetBufferEPvj(v, a2, a3);
}

/* ============================================================================
 * nn_prepo_PlayReport_SetEventId
 * RVA 0x009AD6DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6DC  RVA 0x609AD6DC  size 0xC */
int __fastcall nn_prepo_PlayReport_SetEventId(nn_prepo_PlayReport *v, const char *a2)
{
  return __imp__ZN2nn5prepo10PlayReport10SetEventIdEPKc(v, a2);
}

/* ============================================================================
 * nn_prepo_PlayReport_Add
 * RVA 0x009AD6E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6E8  RVA 0x609AD6E8  size 0xC */
int __fastcall nn_prepo_PlayReport_Add(nn_prepo_PlayReport *v, const char *a2, __int64 a3)
{
  return __imp__ZN2nn5prepo10PlayReport3AddEPKcx(v, a2, a3);
}

/* ============================================================================
 * nn_prepo_PlayReport_Save
 * RVA 0x009AD6F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD6F4  RVA 0x609AD6F4  size 0xC */
int nn_prepo_PlayReport_Save()
{
  return __imp__ZN2nn5prepo10PlayReport4SaveERKNS_7account3UidE();
}

/* ============================================================================
 * nn_prepo_PlayReport_Save
 * RVA 0x009AD700   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD700  RVA 0x609AD700  size 0xC */
int __fastcall nn_prepo_PlayReport_Save(nn_prepo_PlayReport *v)
{
  return __imp__ZN2nn5prepo10PlayReport4SaveEv(v);
}

/* ============================================================================
 * cos
 * RVA 0x009AD70C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD70C  RVA 0x609AD70C  size 0xC */
double cos(double x)
{
  return __imp_cos(x);
}

/* ============================================================================
 * sin
 * RVA 0x009AD718   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD718  RVA 0x609AD718  size 0xC */
double sin(double x)
{
  return __imp_sin(x);
}

/* ============================================================================
 * tan
 * RVA 0x009AD724   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD724  RVA 0x609AD724  size 0xC */
double tan(double x)
{
  return __imp_tan(x);
}

/* ============================================================================
 * nn_diag_detail_LogImpl
 * RVA 0x009AD730   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD730  RVA 0x609AD730  size 0xC */
int nn_diag_detail_LogImpl()
{
  return __imp__ZN2nn4diag6detail7LogImplERKNS0_11LogMetaDataEPKcz();
}

/* ============================================================================
 * hypot
 * RVA 0x009AD73C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD73C  RVA 0x609AD73C  size 0xC */
double hypot(double x, double y)
{
  return __imp_hypot(x, y);
}

/* ============================================================================
 * logb
 * RVA 0x009AD748   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD748  RVA 0x609AD748  size 0xC */
double logb(double x)
{
  return __imp_logb(x);
}

/* ============================================================================
 * scalbn
 * RVA 0x009AD754   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD754  RVA 0x609AD754  size 0xC */
double scalbn(double x, int n)
{
  return __imp_scalbn(x, n);
}

/* ============================================================================
 * nn_detail_UnexpectedDefaultImpl
 * RVA 0x009AD760   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD760  RVA 0x609AD760  size 0xC */
int __fastcall nn_detail_UnexpectedDefaultImpl(nn_detail *v, const char *a2, const char *a3, int a4)
{
  return __imp__ZN2nn6detail21UnexpectedDefaultImplEPKcS2_i(v, a2, a3, a4);
}

/* ============================================================================
 * nn_hid_VibrationTarget_VibrationTarget
 * RVA 0x009AD76C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD76C  RVA 0x609AD76C  size 0xC */
int __fastcall nn_hid_VibrationTarget_VibrationTarget(nn_hid_VibrationTarget *v)
{
  return __imp__ZN2nn3hid15VibrationTargetC1Ev(v);
}

/* ============================================================================
 * nn_hid_VibrationMixer_VibrationMixer
 * RVA 0x009AD778   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD778  RVA 0x609AD778  size 0xC */
int __fastcall nn_hid_VibrationMixer_VibrationMixer(nn_hid_VibrationMixer *v)
{
  return __imp__ZN2nn3hid14VibrationMixerC2Ev(v);
}

/* ============================================================================
 * nn_hid_VibrationNodeConnection_VibrationNodeConnection
 * RVA 0x009AD784   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD784  RVA 0x609AD784  size 0xC */
int __fastcall nn_hid_VibrationNodeConnection_VibrationNodeConnection(nn_hid_VibrationNodeConnection *v)
{
  return __imp__ZN2nn3hid23VibrationNodeConnectionC1Ev(v);
}

/* ============================================================================
 * nn_hid_VibrationNodeConnection_Connect
 * RVA 0x009AD790   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD790  RVA 0x609AD790  size 0xC */
int __fastcall nn_hid_VibrationNodeConnection_Connect(
        nn_hid_VibrationNodeConnection *a1,
        nn_hid_VibrationNode *a2,
        nn_hid_VibrationNode *a3)
{
  return __imp__ZN2nn3hid23VibrationNodeConnection7ConnectEPNS0_13VibrationNodeES3_(a1, a2, a3);
}

/* ============================================================================
 * nn_hid_VibrationNode_Update
 * RVA 0x009AD79C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD79C  RVA 0x609AD79C  size 0xC */
int __fastcall nn_hid_VibrationNode_Update(nn_hid_VibrationNode *v)
{
  return __imp__ZN2nn3hid13VibrationNode6UpdateEv(v);
}

/* ============================================================================
 * nn_hid_VibrationTarget_SetVibrationDeviceHandle
 * RVA 0x009AD7A8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7A8  RVA 0x609AD7A8  size 0xC */
int nn_hid_VibrationTarget_SetVibrationDeviceHandle()
{
  return __imp__ZN2nn3hid15VibrationTarget24SetVibrationDeviceHandleERKNS0_21VibrationDeviceHandleE();
}

/* ============================================================================
 * nn_hid_VibrationTarget_UnsetVibrationDeviceHandle
 * RVA 0x009AD7B4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7B4  RVA 0x609AD7B4  size 0xC */
int __fastcall nn_hid_VibrationTarget_UnsetVibrationDeviceHandle(nn_hid_VibrationTarget *v)
{
  return __imp__ZN2nn3hid15VibrationTarget26UnsetVibrationDeviceHandleEv(v);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_VibrationPlayer
 * RVA 0x009AD7E4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7E4  RVA 0x609AD7E4  size 0xC */
int __fastcall nn_hid_VibrationPlayer_VibrationPlayer(nn_hid_VibrationPlayer *v)
{
  return __imp__ZN2nn3hid15VibrationPlayerC2Ev(v);
}

/* ============================================================================
 * nn_hid_VibrationWriter_VibrationWriter
 * RVA 0x009AD7F0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7F0  RVA 0x609AD7F0  size 0xC */
int __fastcall nn_hid_VibrationWriter_VibrationWriter(nn_hid_VibrationWriter *v)
{
  return __imp__ZN2nn3hid15VibrationWriterC1Ev(v);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_Stop
 * RVA 0x009AD7FC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD7FC  RVA 0x609AD7FC  size 0xC */
int __fastcall nn_hid_VibrationPlayer_Stop(nn_hid_VibrationPlayer *v)
{
  return __imp__ZN2nn3hid15VibrationPlayer4StopEv(v);
}

/* ============================================================================
 * nn_hid_VibrationWriter_Write
 * RVA 0x009AD808   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD808  RVA 0x609AD808  size 0xC */
int nn_hid_VibrationWriter_Write()
{
  return __imp__ZN2nn3hid15VibrationWriter5WriteERKNS0_14VibrationValueE();
}

/* ============================================================================
 * nn_hid_VibrationNodeConnection_SetModulation
 * RVA 0x009AD814   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD814  RVA 0x609AD814  size 0xC */
int nn_hid_VibrationNodeConnection_SetModulation()
{
  return __imp__ZN2nn3hid23VibrationNodeConnection13SetModulationERKNS0_19VibrationModulationE();
}

/* ============================================================================
 * nn_hid_VibrationPlayer_IsPlaying
 * RVA 0x009AD820   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD820  RVA 0x609AD820  size 0xC */
int __fastcall nn_hid_VibrationPlayer_IsPlaying(nn_hid_VibrationPlayer *v)
{
  return __imp__ZNK2nn3hid15VibrationPlayer9IsPlayingEv(v);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_Load
 * RVA 0x009AD82C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD82C  RVA 0x609AD82C  size 0xC */
int __fastcall nn_hid_VibrationPlayer_Load(nn_hid_VibrationPlayer *v, const void *a2, unsigned int a3)
{
  return __imp__ZN2nn3hid15VibrationPlayer4LoadEPKvj(v, a2, a3);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_SetCurrentPosition
 * RVA 0x009AD838   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD838  RVA 0x609AD838  size 0xC */
int __fastcall nn_hid_VibrationPlayer_SetCurrentPosition(nn_hid_VibrationPlayer *v, int a2)
{
  return __imp__ZN2nn3hid15VibrationPlayer18SetCurrentPositionEi(v, a2);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_Play
 * RVA 0x009AD844   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD844  RVA 0x609AD844  size 0xC */
int __fastcall nn_hid_VibrationPlayer_Play(nn_hid_VibrationPlayer *v)
{
  return __imp__ZN2nn3hid15VibrationPlayer4PlayEv(v);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_IsLoaded
 * RVA 0x009AD850   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD850  RVA 0x609AD850  size 0xC */
int __fastcall nn_hid_VibrationPlayer_IsLoaded(nn_hid_VibrationPlayer *v)
{
  return __imp__ZNK2nn3hid15VibrationPlayer8IsLoadedEv(v);
}

/* ============================================================================
 * nn_hid_VibrationPlayer_Unload
 * RVA 0x009AD85C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD85C  RVA 0x609AD85C  size 0xC */
int __fastcall nn_hid_VibrationPlayer_Unload(nn_hid_VibrationPlayer *v)
{
  return __imp__ZN2nn3hid15VibrationPlayer6UnloadEv(v);
}

/* ============================================================================
 * _aeabi_ul2f
 * RVA 0x009AD868   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD868  RVA 0x609AD868  size 0xC */
void _aeabi_ul2f()
{
  ;
}

/* ============================================================================
 * nn_hid_VibrationMixer_OnNextSampleRequired
 * RVA 0x009AD874   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD874  RVA 0x609AD874  size 0xC */
int nn_hid_VibrationMixer_OnNextSampleRequired()
{
  return __imp__ZN2nn3hid14VibrationMixer20OnNextSampleRequiredEPNS0_14VibrationValueEPNS_4util13IntrusiveListINS0_23VibrationNodeConnectionENS4_27IntrusiveListBaseNodeTraitsIS6_S6_EEEE();
}

/* ============================================================================
 * nn_hid_VibrationPlayer_OnNextSampleRequired
 * RVA 0x009AD880   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD880  RVA 0x609AD880  size 0xC */
int nn_hid_VibrationPlayer_OnNextSampleRequired()
{
  return __imp__ZN2nn3hid15VibrationPlayer20OnNextSampleRequiredEPNS0_14VibrationValueEPNS_4util13IntrusiveListINS0_23VibrationNodeConnectionENS4_27IntrusiveListBaseNodeTraitsIS6_S6_EEEE();
}

/* ============================================================================
 * nn_oe_GetOperationMode
 * RVA 0x009AD8A4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8A4  RVA 0x609AD8A4  size 0xC */
int __fastcall nn_oe_GetOperationMode(nn_oe *v)
{
  return __imp__ZN2nn2oe16GetOperationModeEv(v);
}

/* ============================================================================
 * atoi
 * RVA 0x009AD8B0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8B0  RVA 0x609AD8B0  size 0xC */
int atoi(const char *nptr)
{
  return __imp_atoi(nptr);
}

/* ============================================================================
 * nn_oe_GetExpectedVolumeBalance
 * RVA 0x009AD8BC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8BC  RVA 0x609AD8BC  size 0xC */
int __fastcall nn_oe_GetExpectedVolumeBalance(nn_oe *v, float *a2, float *a3)
{
  return __imp__ZN2nn2oe24GetExpectedVolumeBalanceEPfS1_(v, a2, a3);
}

/* ============================================================================
 * nn_oe_SetExpectedVolumeBalance
 * RVA 0x009AD8C8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8C8  RVA 0x609AD8C8  size 0xC */
int __fastcall nn_oe_SetExpectedVolumeBalance(nn_oe *v, float a2, float a3)
{
  return __imp__ZN2nn2oe24SetExpectedVolumeBalanceEff(v, a2, a3);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_ShowWebPageArg
 * RVA 0x009AD8D4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8D4  RVA 0x609AD8D4  size 0xC */
int __fastcall nn_web_ShowWebPageArg_ShowWebPageArg(nn_web_ShowWebPageArg *v, const char *a2)
{
  return __imp__ZN2nn3web14ShowWebPageArgC1EPKc(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetBootDisplayKind
 * RVA 0x009AD8E0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8E0  RVA 0x609AD8E0  size 0xC */
int nn_web_ShowWebPageArg_SetBootDisplayKind()
{
  return __imp__ZN2nn3web14ShowWebPageArg18SetBootDisplayKindENS0_18WebBootDisplayKindE();
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetJsExtensionEnabled
 * RVA 0x009AD8EC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8EC  RVA 0x609AD8EC  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetJsExtensionEnabled(nn_web_ShowWebPageArg *v, bool a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg21SetJsExtensionEnabledEb(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetLeftStickMode
 * RVA 0x009AD8F8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD8F8  RVA 0x609AD8F8  size 0xC */
int nn_web_ShowWebPageArg_SetLeftStickMode()
{
  return __imp__ZN2nn3web14ShowWebPageArg16SetLeftStickModeENS0_16WebLeftStickModeE();
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetMediaPlayerAutoCloseEnabled
 * RVA 0x009AD904   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD904  RVA 0x609AD904  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetMediaPlayerAutoCloseEnabled(nn_web_ShowWebPageArg *v, bool a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg30SetMediaPlayerAutoCloseEnabledEb(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetPageCacheEnabled
 * RVA 0x009AD910   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD910  RVA 0x609AD910  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetPageCacheEnabled(nn_web_ShowWebPageArg *v, bool a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg19SetPageCacheEnabledEb(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetPointerEnabled
 * RVA 0x009AD91C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD91C  RVA 0x609AD91C  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetPointerEnabled(nn_web_ShowWebPageArg *v, bool a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg17SetPointerEnabledEb(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetTouchEnabledOnContents
 * RVA 0x009AD928   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD928  RVA 0x609AD928  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetTouchEnabledOnContents(nn_web_ShowWebPageArg *v, bool a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg25SetTouchEnabledOnContentsEb(v, a2);
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetUid
 * RVA 0x009AD934   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD934  RVA 0x609AD934  size 0xC */
int nn_web_ShowWebPageArg_SetUid()
{
  return __imp__ZN2nn3web14ShowWebPageArg6SetUidERKNS_7account3UidE();
}

/* ============================================================================
 * nn_web_ShowWebPageArg_SetCallbackUrl
 * RVA 0x009AD940   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD940  RVA 0x609AD940  size 0xC */
int __fastcall nn_web_ShowWebPageArg_SetCallbackUrl(nn_web_ShowWebPageArg *v, const char *a2)
{
  return __imp__ZN2nn3web14ShowWebPageArg14SetCallbackUrlEPKc(v, a2);
}

/* ============================================================================
 * nn_web_SetEcClientCertEnabled
 * RVA 0x009AD94C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD94C  RVA 0x609AD94C  size 0xC */
int __fastcall nn_web_SetEcClientCertEnabled(nn_web *v, nn_web_ShowWebPageArg *a2)
{
  return __imp__ZN2nn3web22SetEcClientCertEnabledEPNS0_14ShowWebPageArgE(v, a2);
}

/* ============================================================================
 * nn_web_WebPageReturnValue_WebPageReturnValue
 * RVA 0x009AD958   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD958  RVA 0x609AD958  size 0xC */
int __fastcall nn_web_WebPageReturnValue_WebPageReturnValue(nn_web_WebPageReturnValue *v)
{
  return __imp__ZN2nn3web18WebPageReturnValueC1Ev(v);
}

/* ============================================================================
 * nn_web_ShowWebPage
 * RVA 0x009AD964   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD964  RVA 0x609AD964  size 0xC */
int __fastcall nn_web_ShowWebPage(nn_web *v, nn_web_WebPageReturnValue *a2, const nn_web_ShowWebPageArg *a3)
{
  return __imp__ZN2nn3web11ShowWebPageEPNS0_18WebPageReturnValueERKNS0_14ShowWebPageArgE(v, a2, a3);
}

/* ============================================================================
 * nn_hid_StartLrAssignmentMode
 * RVA 0x009AD970   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD970  RVA 0x609AD970  size 0xC */
int __fastcall nn_hid_StartLrAssignmentMode(nn_hid *v)
{
  return __imp__ZN2nn3hid21StartLrAssignmentModeEv(v);
}

/* ============================================================================
 * nn_hid_StopLrAssignmentMode
 * RVA 0x009AD97C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD97C  RVA 0x609AD97C  size 0xC */
int __fastcall nn_hid_StopLrAssignmentMode(nn_hid *v)
{
  return __imp__ZN2nn3hid20StopLrAssignmentModeEv(v);
}

/* ============================================================================
 * nn_os_FinalizeMutex
 * RVA 0x009AD988   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD988  RVA 0x609AD988  size 0xC */
int nn_os_FinalizeMutex()
{
  return __imp__ZN2nn2os13FinalizeMutexEPNS0_9MutexTypeE();
}

/* ============================================================================
 * nn_os_DestroySystemEvent
 * RVA 0x009AD994   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD994  RVA 0x609AD994  size 0xC */
int nn_os_DestroySystemEvent()
{
  return __imp__ZN2nn2os18DestroySystemEventEPNS0_15SystemEventTypeE();
}

/* ============================================================================
 * strncpy
 * RVA 0x009AD9A0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9A0  RVA 0x609AD9A0  size 0xC */
char *strncpy(char *dest, const char *src, size_t n)
{
  return __imp_strncpy(dest, src, n);
}

/* ============================================================================
 * nn_audio_SetAudioDeviceOutputVolume
 * RVA 0x009AD9AC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9AC  RVA 0x609AD9AC  size 0xC */
int nn_audio_SetAudioDeviceOutputVolume()
{
  return __imp__ZN2nn5audio26SetAudioDeviceOutputVolumeEPKNS0_15AudioDeviceNameEf();
}

/* ============================================================================
 * nn_os_LockMutex
 * RVA 0x009AD9B8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9B8  RVA 0x609AD9B8  size 0xC */
int nn_os_LockMutex()
{
  return __imp__ZN2nn2os9LockMutexEPNS0_9MutexTypeE();
}

/* ============================================================================
 * nn_os_UnlockMutex
 * RVA 0x009AD9C4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9C4  RVA 0x609AD9C4  size 0xC */
int nn_os_UnlockMutex()
{
  return __imp__ZN2nn2os11UnlockMutexEPNS0_9MutexTypeE();
}

/* ============================================================================
 * nn_hid_VibrationNode_VibrationNode
 * RVA 0x009AD9D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9D0  RVA 0x609AD9D0  size 0xC */
int __fastcall nn_hid_VibrationNode_VibrationNode(nn_hid_VibrationNode *v)
{
  return __imp__ZN2nn3hid13VibrationNodeC2Ev(v);
}

/* ============================================================================
 * nn_audio_AcquireMemoryPool
 * RVA 0x009AD9DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9DC  RVA 0x609AD9DC  size 0xC */
int nn_audio_AcquireMemoryPool()
{
  return __imp__ZN2nn5audio17AcquireMemoryPoolEPNS0_19AudioRendererConfigEPNS0_14MemoryPoolTypeEPvj();
}

/* ============================================================================
 * nn_audio_RequestAttachMemoryPool
 * RVA 0x009AD9E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9E8  RVA 0x609AD9E8  size 0xC */
int nn_audio_RequestAttachMemoryPool()
{
  return __imp__ZN2nn5audio23RequestAttachMemoryPoolEPNS0_14MemoryPoolTypeE();
}

/* ============================================================================
 * nn_oe_SetOperationModeChangedNotificationEnabled
 * RVA 0x009AD9F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AD9F4  RVA 0x609AD9F4  size 0xC */
int __fastcall nn_oe_SetOperationModeChangedNotificationEnabled(nn_oe *v, bool a2)
{
  return __imp__ZN2nn2oe42SetOperationModeChangedNotificationEnabledEb(v, a2);
}

/* ============================================================================
 * nn_oe_SetPerformanceModeChangedNotificationEnabled
 * RVA 0x009ADA00   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA00  RVA 0x609ADA00  size 0xC */
int __fastcall nn_oe_SetPerformanceModeChangedNotificationEnabled(nn_oe *v, bool a2)
{
  return __imp__ZN2nn2oe44SetPerformanceModeChangedNotificationEnabledEb(v, a2);
}

/* ============================================================================
 * nn_hid_InitializeTouchScreen
 * RVA 0x009ADA0C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA0C  RVA 0x609ADA0C  size 0xC */
int __fastcall nn_hid_InitializeTouchScreen(nn_hid *v)
{
  return __imp__ZN2nn3hid21InitializeTouchScreenEv(v);
}

/* ============================================================================
 * _aeabi_l2f
 * RVA 0x009ADA18   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA18  RVA 0x609ADA18  size 0xC */
void _aeabi_l2f()
{
  ;
}

/* ============================================================================
 * nn_oe_GetPerformanceMode
 * RVA 0x009ADA24   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA24  RVA 0x609ADA24  size 0xC */
int __fastcall nn_oe_GetPerformanceMode(nn_oe *v)
{
  return __imp__ZN2nn2oe18GetPerformanceModeEv(v);
}

/* ============================================================================
 * nn_oe_SetResumeNotificationEnabled
 * RVA 0x009ADA30   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA30  RVA 0x609ADA30  size 0xC */
int __fastcall nn_oe_SetResumeNotificationEnabled(nn_oe *v, bool a2)
{
  return __imp__ZN2nn2oe28SetResumeNotificationEnabledEb(v, a2);
}

/* ============================================================================
 * nn_oe_TryPopNotificationMessage
 * RVA 0x009ADA3C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA3C  RVA 0x609ADA3C  size 0xC */
int __fastcall nn_oe_TryPopNotificationMessage(nn_oe *v, unsigned int *a2)
{
  return __imp__ZN2nn2oe25TryPopNotificationMessageEPj(v, a2);
}

/* ============================================================================
 * nn_diag_IsDebuggerAttached
 * RVA 0x009ADA48   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA48  RVA 0x609ADA48  size 0xC */
int __fastcall nn_diag_IsDebuggerAttached(nn_diag *v)
{
  return __imp__ZN2nn4diag18IsDebuggerAttachedEv(v);
}

/* ============================================================================
 * nn_fs_MountSaveData
 * RVA 0x009ADA54   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA54  RVA 0x609ADA54  size 0xC */
int __fastcall nn_fs_MountSaveData(int a1, int a2)
{
  return __imp__ZN2nn2fs13MountSaveDataEPKcRKNS_7account3UidE(a1, a2);
}

/* ============================================================================
 * nn_os_ConvertToTimeSpan
 * RVA 0x009ADA60   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA60  RVA 0x609ADA60  size 0xC */
int nn_os_ConvertToTimeSpan()
{
  return __imp__ZN2nn2os17ConvertToTimeSpanENS0_4TickE();
}

/* ============================================================================
 * nn_oe_EnterExitRequestHandlingSection
 * RVA 0x009ADA6C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA6C  RVA 0x609ADA6C  size 0xC */
int __fastcall nn_oe_EnterExitRequestHandlingSection(nn_oe *v)
{
  return __imp__ZN2nn2oe31EnterExitRequestHandlingSectionEv(v);
}

/* ============================================================================
 * nn_oe_LeaveExitRequestHandlingSection
 * RVA 0x009ADA78   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA78  RVA 0x609ADA78  size 0xC */
int __fastcall nn_oe_LeaveExitRequestHandlingSection(nn_oe *v)
{
  return __imp__ZN2nn2oe31LeaveExitRequestHandlingSectionEv(v);
}

/* ============================================================================
 * nn_account_Initialize
 * RVA 0x009ADA84   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA84  RVA 0x609ADA84  size 0xC */
int __fastcall nn_account_Initialize()
{
  return __imp__ZN2nn7account10InitializeEv();
}

/* ============================================================================
 * nn_account_OpenPreselectedUser
 * RVA 0x009ADA90   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA90  RVA 0x609ADA90  size 0xC */
int nn_account_OpenPreselectedUser()
{
  return __imp__ZN2nn7account19OpenPreselectedUserEPNS0_10UserHandleE();
}

/* ============================================================================
 * nn_account_GetUserId
 * RVA 0x009ADA9C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADA9C  RVA 0x609ADA9C  size 0xC */
int nn_account_GetUserId()
{
  return __imp__ZN2nn7account9GetUserIdEPNS0_3UidERKNS0_10UserHandleE();
}

/* ============================================================================
 * nn_mem_StandardAllocator_StandardAllocator
 * RVA 0x009ADAA8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAA8  RVA 0x609ADAA8  size 0xC */
int __fastcall nn_mem_StandardAllocator_StandardAllocator(nn_mem_StandardAllocator *v)
{
  return __imp__ZN2nn3mem17StandardAllocatorC1Ev(v);
}

/* ============================================================================
 * nn_mem_StandardAllocator_Initialize
 * RVA 0x009ADAB4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAB4  RVA 0x609ADAB4  size 0xC */
int __fastcall nn_mem_StandardAllocator_Initialize(nn_mem_StandardAllocator *v, void *a2, unsigned int a3)
{
  return __imp__ZN2nn3mem17StandardAllocator10InitializeEPvj(v, a2, a3);
}

/* ============================================================================
 * nn_mem_StandardAllocator_Allocate
 * RVA 0x009ADAC0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAC0  RVA 0x609ADAC0  size 0xC */
int __fastcall nn_mem_StandardAllocator_Allocate(nn_mem_StandardAllocator *v, unsigned int a2)
{
  return __imp__ZN2nn3mem17StandardAllocator8AllocateEj(v, a2);
}

/* ============================================================================
 * _errno_location
 * RVA 0x009ADACC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADACC  RVA 0x609ADACC  size 0xC */
int *_errno_location(void)
{
  return __errno_location();
}

/* ============================================================================
 * nn_mem_StandardAllocator_Free
 * RVA 0x009ADAD8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAD8  RVA 0x609ADAD8  size 0xC */
int __fastcall nn_mem_StandardAllocator_Free(nn_mem_StandardAllocator *v, void *a2)
{
  return __imp__ZN2nn3mem17StandardAllocator4FreeEPv(v, a2);
}

/* ============================================================================
 * nn_mem_StandardAllocator_Reallocate
 * RVA 0x009ADAE4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAE4  RVA 0x609ADAE4  size 0xC */
int __fastcall nn_mem_StandardAllocator_Reallocate(nn_mem_StandardAllocator *v, void *a2, unsigned int a3)
{
  return __imp__ZN2nn3mem17StandardAllocator10ReallocateEPvj(v, a2, a3);
}

/* ============================================================================
 * nn_mem_StandardAllocator_Allocate
 * RVA 0x009ADAF0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAF0  RVA 0x609ADAF0  size 0xC */
int __fastcall nn_mem_StandardAllocator_Allocate(nn_mem_StandardAllocator *v, unsigned int a2, unsigned int a3)
{
  return __imp__ZN2nn3mem17StandardAllocator8AllocateEjj(v, a2, a3);
}

/* ============================================================================
 * nn_os_InitializeMutex
 * RVA 0x009ADAFC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADAFC  RVA 0x609ADAFC  size 0xC */
int nn_os_InitializeMutex()
{
  return __imp__ZN2nn2os15InitializeMutexEPNS0_9MutexTypeEbi();
}

/* ============================================================================
 * std_string_assign
 * RVA 0x009ADB08   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB08  RVA 0x609ADB08  size 0xC */
int std_string_assign()
{
  return __imp__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcj();
}

/* ============================================================================
 * nn_util_BinaryFileHeader_IsRelocated
 * RVA 0x009ADB14   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB14  RVA 0x609ADB14  size 0xC */
int __fastcall nn_util_BinaryFileHeader_IsRelocated(nn_util_BinaryFileHeader *v)
{
  return __imp__ZNK2nn4util16BinaryFileHeader11IsRelocatedEv(v);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_GetRelocationTable
 * RVA 0x009ADB20   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB20  RVA 0x609ADB20  size 0xC */
int __fastcall nn_util_BinaryFileHeader_GetRelocationTable(nn_util_BinaryFileHeader *v)
{
  return __imp__ZN2nn4util16BinaryFileHeader18GetRelocationTableEv(v);
}

/* ============================================================================
 * nn_util_RelocationTable_Relocate
 * RVA 0x009ADB2C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB2C  RVA 0x609ADB2C  size 0xC */
int __fastcall nn_util_RelocationTable_Relocate(nn_util_RelocationTable *v)
{
  return __imp__ZN2nn4util15RelocationTable8RelocateEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_ParamCharInfoAccessor
 * RVA 0x009ADB38   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB38  RVA 0x609ADB38  size 0xC */
int nn_mii_ParamCharInfoAccessor_ParamCharInfoAccessor()
{
  return __imp__ZN2nn3mii21ParamCharInfoAccessorC1ERKNS0_8CharInfoE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_IsValid
 * RVA 0x009ADB44   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB44  RVA 0x609ADB44  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_IsValid(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor7IsValidEv(v);
}

/* ============================================================================
 * nn_mii_detail_BufferAllocator_BufferAllocator
 * RVA 0x009ADB50   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB50  RVA 0x609ADB50  size 0xC */
int __fastcall nn_mii_detail_BufferAllocator_BufferAllocator(
        nn_mii_detail_BufferAllocator *v,
        void *a2,
        unsigned int a3)
{
  return __imp__ZN2nn3mii6detail15BufferAllocatorC1EPvj(v, a2, a3);
}

/* ============================================================================
 * nn_mii_detail_BufferAllocator_AlignUp
 * RVA 0x009ADB5C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB5C  RVA 0x609ADB5C  size 0xC */
int __fastcall nn_mii_detail_BufferAllocator_AlignUp(nn_mii_detail_BufferAllocator *v, unsigned int a2)
{
  return __imp__ZN2nn3mii6detail15BufferAllocator7AlignUpEj(v, a2);
}

/* ============================================================================
 * nn_mii_detail_BufferAllocator_Advance
 * RVA 0x009ADB68   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB68  RVA 0x609ADB68  size 0xC */
int __fastcall nn_mii_detail_BufferAllocator_Advance(nn_mii_detail_BufferAllocator *v, unsigned int a2)
{
  return __imp__ZN2nn3mii6detail15BufferAllocator7AdvanceEj(v, a2);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetGender
 * RVA 0x009ADB80   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB80  RVA 0x609ADB80  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetGender(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor9GetGenderEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_IsSpecial
 * RVA 0x009ADB8C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB8C  RVA 0x609ADB8C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_IsSpecial(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor9IsSpecialEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetFacelineColor
 * RVA 0x009ADB98   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADB98  RVA 0x609ADB98  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetFacelineColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor16GetFacelineColorEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetFavoriteColor
 * RVA 0x009ADBA4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBA4  RVA 0x609ADBA4  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetFavoriteColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor16GetFavoriteColorEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetHairColor
 * RVA 0x009ADBB0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBB0  RVA 0x609ADBB0  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetHairColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetHairColorEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetBeardColor
 * RVA 0x009ADBBC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBBC  RVA 0x609ADBBC  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetBeardColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor13GetBeardColorEv(v);
}

/* ============================================================================
 * nn_fs_QueryMountSystemDataCacheSize
 * RVA 0x009ADBC8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBC8  RVA 0x609ADBC8  size 0xC */
int nn_fs_QueryMountSystemDataCacheSize()
{
  return __imp__ZN2nn2fs29QueryMountSystemDataCacheSizeEPjNS_3ncm12SystemDataIdE();
}

/* ============================================================================
 * nn_fs_MountSystemData
 * RVA 0x009ADBD4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBD4  RVA 0x609ADBD4  size 0xC */
int nn_fs_MountSystemData()
{
  return __imp__ZN2nn2fs15MountSystemDataEPKcNS_3ncm12SystemDataIdEPvj();
}

/* ============================================================================
 * nn_fs_Unmount
 * RVA 0x009ADBE0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBE0  RVA 0x609ADBE0  size 0xC */
int __fastcall nn_fs_Unmount(nn_fs *v, const char *a2)
{
  return __imp__ZN2nn2fs7UnmountEPKc(v, a2);
}

/* ============================================================================
 * nn_fs_OpenFile
 * RVA 0x009ADBEC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBEC  RVA 0x609ADBEC  size 0xC */
int nn_fs_OpenFile()
{
  return __imp__ZN2nn2fs8OpenFileEPNS0_10FileHandleEPKci();
}

/* ============================================================================
 * nn_fs_GetFileSize
 * RVA 0x009ADBF8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADBF8  RVA 0x609ADBF8  size 0xC */
int nn_fs_GetFileSize()
{
  return __imp__ZN2nn2fs11GetFileSizeEPxNS0_10FileHandleE();
}

/* ============================================================================
 * nn_fs_CloseFile
 * RVA 0x009ADC04   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC04  RVA 0x609ADC04  size 0xC */
int nn_fs_CloseFile()
{
  return __imp__ZN2nn2fs9CloseFileENS0_10FileHandleE();
}

/* ============================================================================
 * nn_fs_ReadFile
 * RVA 0x009ADC10   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC10  RVA 0x609ADC10  size 0xC */
int nn_fs_ReadFile()
{
  return __imp__ZN2nn2fs8ReadFileENS0_10FileHandleExPvj();
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment_CalculateSizeAndAlignment
 * RVA 0x009ADC1C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC1C  RVA 0x609ADC1C  size 0xC */
int __fastcall nn_mii_detail_CalculateSizeAndAlignment_CalculateSizeAndAlignment(
        nn_mii_detail_CalculateSizeAndAlignment *v)
{
  return __imp__ZN2nn3mii6detail25CalculateSizeAndAlignmentC1Ev(v);
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment_AddSize
 * RVA 0x009ADC28   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC28  RVA 0x609ADC28  size 0xC */
int __fastcall nn_mii_detail_CalculateSizeAndAlignment_AddSize(
        nn_mii_detail_CalculateSizeAndAlignment *v,
        unsigned int a2)
{
  return __imp__ZN2nn3mii6detail25CalculateSizeAndAlignment7AddSizeEj(v, a2);
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment_AddSizeWithAlignment
 * RVA 0x009ADC34   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC34  RVA 0x609ADC34  size 0xC */
int __fastcall nn_mii_detail_CalculateSizeAndAlignment_AddSizeWithAlignment(
        nn_mii_detail_CalculateSizeAndAlignment *v,
        unsigned int a2,
        unsigned int a3)
{
  return __imp__ZN2nn3mii6detail25CalculateSizeAndAlignment20AddSizeWithAlignmentEjj(v, a2, a3);
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment_GetSize
 * RVA 0x009ADC40   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC40  RVA 0x609ADC40  size 0xC */
int __fastcall nn_mii_detail_CalculateSizeAndAlignment_GetSize(nn_mii_detail_CalculateSizeAndAlignment *v)
{
  return __imp__ZNK2nn3mii6detail25CalculateSizeAndAlignment7GetSizeEv(v);
}

/* ============================================================================
 * nn_mii_detail_CalculateSizeAndAlignment_AddSizeWithAlignment
 * RVA 0x009ADC58   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC58  RVA 0x609ADC58  size 0xC */
int __fastcall nn_mii_detail_CalculateSizeAndAlignment_AddSizeWithAlignment(
        nn_mii_detail_CalculateSizeAndAlignment *v,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  return __imp__ZN2nn3mii6detail25CalculateSizeAndAlignment20AddSizeWithAlignmentEjji(v, a2, a3, a4);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetBeardType
 * RVA 0x009ADC64   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC64  RVA 0x609ADC64  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetBeardType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetBeardTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetGlassType
 * RVA 0x009ADC70   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC70  RVA 0x609ADC70  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetGlassType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetGlassTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetHairType
 * RVA 0x009ADC7C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC7C  RVA 0x609ADC7C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetHairType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetHairTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetNoseType
 * RVA 0x009ADC88   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC88  RVA 0x609ADC88  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetNoseType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetNoseTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetFacelineType
 * RVA 0x009ADC94   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADC94  RVA 0x609ADC94  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetFacelineType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor15GetFacelineTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetHairFlip
 * RVA 0x009ADCA0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCA0  RVA 0x609ADCA0  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetHairFlip(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetHairFlipEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetNoseY
 * RVA 0x009ADCAC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCAC  RVA 0x609ADCAC  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetNoseY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor8GetNoseYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetNoseScale
 * RVA 0x009ADCB8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCB8  RVA 0x609ADCB8  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetNoseScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetNoseScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetGlassY
 * RVA 0x009ADCC4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCC4  RVA 0x609ADCC4  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetGlassY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor9GetGlassYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetGlassScale
 * RVA 0x009ADCD0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCD0  RVA 0x609ADCD0  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetGlassScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor13GetGlassScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetGlassColor
 * RVA 0x009ADCDC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCDC  RVA 0x609ADCDC  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetGlassColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor13GetGlassColorEv(v);
}

/* ============================================================================
 * nn_mii_GetCommonColor
 * RVA 0x009ADCE8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCE8  RVA 0x609ADCE8  size 0xC */
int nn_mii_GetCommonColor()
{
  return __imp__ZN2nn3mii14GetCommonColorENS0_11CommonColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetSkinColor
 * RVA 0x009ADCF4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADCF4  RVA 0x609ADCF4  size 0xC */
int nn_mii_GetSkinColor()
{
  return __imp__ZN2nn3mii12GetSkinColorENS0_13FacelineColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetNoselineColor
 * RVA 0x009ADD00   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD00  RVA 0x609ADD00  size 0xC */
int nn_mii_GetNoselineColor()
{
  return __imp__ZN2nn3mii16GetNoselineColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetFacelineMake
 * RVA 0x009ADD0C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD0C  RVA 0x609ADD0C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetFacelineMake(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor15GetFacelineMakeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetFacelineWrinkle
 * RVA 0x009ADD18   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD18  RVA 0x609ADD18  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetFacelineWrinkle(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor18GetFacelineWrinkleEv(v);
}

/* ============================================================================
 * nn_mii_GetWrinkleColor
 * RVA 0x009ADD24   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD24  RVA 0x609ADD24  size 0xC */
int nn_mii_GetWrinkleColor()
{
  return __imp__ZN2nn3mii15GetWrinkleColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMustacheType
 * RVA 0x009ADD30   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD30  RVA 0x609ADD30  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMustacheType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor15GetMustacheTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMoleType
 * RVA 0x009ADD3C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD3C  RVA 0x609ADD3C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMoleType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetMoleTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeType
 * RVA 0x009ADD48   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD48  RVA 0x609ADD48  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor10GetEyeTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowType
 * RVA 0x009ADD54   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD54  RVA 0x609ADD54  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor14GetEyebrowTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMouthType
 * RVA 0x009ADD60   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD60  RVA 0x609ADD60  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMouthType(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetMouthTypeEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeRotate
 * RVA 0x009ADD6C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD6C  RVA 0x609ADD6C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeRotate(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetEyeRotateEv(v);
}

/* ============================================================================
 * nn_mii_detail_GetEyeRotateOffset
 * RVA 0x009ADD78   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD78  RVA 0x609ADD78  size 0xC */
int nn_mii_detail_GetEyeRotateOffset()
{
  return __imp__ZN2nn3mii6detail18GetEyeRotateOffsetENS0_7EyeTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowY
 * RVA 0x009ADD84   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD84  RVA 0x609ADD84  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetEyebrowYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowRotate
 * RVA 0x009ADD90   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD90  RVA 0x609ADD90  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowRotate(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor16GetEyebrowRotateEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeX
 * RVA 0x009ADD9C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADD9C  RVA 0x609ADD9C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeX(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor7GetEyeXEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeY
 * RVA 0x009ADDA8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDA8  RVA 0x609ADDA8  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor7GetEyeYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeScale
 * RVA 0x009ADDB4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDB4  RVA 0x609ADDB4  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetEyeScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeAspect
 * RVA 0x009ADDC0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDC0  RVA 0x609ADDC0  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeAspect(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetEyeAspectEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowX
 * RVA 0x009ADDCC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDCC  RVA 0x609ADDCC  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowX(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetEyebrowXEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowScale
 * RVA 0x009ADDD8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDD8  RVA 0x609ADDD8  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor15GetEyebrowScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowAspect
 * RVA 0x009ADDE4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDE4  RVA 0x609ADDE4  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowAspect(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor16GetEyebrowAspectEv(v);
}

/* ============================================================================
 * nn_mii_detail_GetEyebrowRotateOffset
 * RVA 0x009ADDF0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDF0  RVA 0x609ADDF0  size 0xC */
int nn_mii_detail_GetEyebrowRotateOffset()
{
  return __imp__ZN2nn3mii6detail22GetEyebrowRotateOffsetENS0_11EyebrowTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMouthY
 * RVA 0x009ADDFC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADDFC  RVA 0x609ADDFC  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMouthY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor9GetMouthYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMouthScale
 * RVA 0x009ADE08   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE08  RVA 0x609ADE08  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMouthScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor13GetMouthScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMouthAspect
 * RVA 0x009ADE14   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE14  RVA 0x609ADE14  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMouthAspect(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor14GetMouthAspectEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMustacheY
 * RVA 0x009ADE20   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE20  RVA 0x609ADE20  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMustacheY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetMustacheYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMustacheScale
 * RVA 0x009ADE2C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE2C  RVA 0x609ADE2C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMustacheScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor16GetMustacheScaleEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMoleX
 * RVA 0x009ADE38   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE38  RVA 0x609ADE38  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMoleX(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor8GetMoleXEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMoleY
 * RVA 0x009ADE44   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE44  RVA 0x609ADE44  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMoleY(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor8GetMoleYEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMoleScale
 * RVA 0x009ADE50   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE50  RVA 0x609ADE50  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMoleScale(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor12GetMoleScaleEv(v);
}

/* ============================================================================
 * nn_mii_GetEyeRedColor
 * RVA 0x009ADE5C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE5C  RVA 0x609ADE5C  size 0xC */
int nn_mii_GetEyeRedColor()
{
  return __imp__ZN2nn3mii14GetEyeRedColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetEyeGreenColor
 * RVA 0x009ADE68   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE68  RVA 0x609ADE68  size 0xC */
int nn_mii_GetEyeGreenColor()
{
  return __imp__ZN2nn3mii16GetEyeGreenColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyeColor
 * RVA 0x009ADE74   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE74  RVA 0x609ADE74  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyeColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor11GetEyeColorEv(v);
}

/* ============================================================================
 * nn_mii_GetEyeBlueColor
 * RVA 0x009ADE80   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE80  RVA 0x609ADE80  size 0xC */
int nn_mii_GetEyeBlueColor()
{
  return __imp__ZN2nn3mii15GetEyeBlueColorENS0_11CommonColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetEyebrowColor
 * RVA 0x009ADE8C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE8C  RVA 0x609ADE8C  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetEyebrowColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor15GetEyebrowColorEv(v);
}

/* ============================================================================
 * nn_mii_ParamCharInfoAccessor_GetMouthColor
 * RVA 0x009ADE98   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADE98  RVA 0x609ADE98  size 0xC */
int __fastcall nn_mii_ParamCharInfoAccessor_GetMouthColor(nn_mii_ParamCharInfoAccessor *v)
{
  return __imp__ZNK2nn3mii21ParamCharInfoAccessor13GetMouthColorEv(v);
}

/* ============================================================================
 * nn_mii_GetMouthRedColor
 * RVA 0x009ADEA4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEA4  RVA 0x609ADEA4  size 0xC */
int nn_mii_GetMouthRedColor()
{
  return __imp__ZN2nn3mii16GetMouthRedColorENS0_11CommonColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetMouthGreenColor
 * RVA 0x009ADEB0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEB0  RVA 0x609ADEB0  size 0xC */
int nn_mii_GetMouthGreenColor()
{
  return __imp__ZN2nn3mii18GetMouthGreenColorENS0_11CommonColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetMouthBlueColor
 * RVA 0x009ADEBC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEBC  RVA 0x609ADEBC  size 0xC */
int nn_mii_GetMouthBlueColor()
{
  return __imp__ZN2nn3mii17GetMouthBlueColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_mii_GetMoleColor
 * RVA 0x009ADEC8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEC8  RVA 0x609ADEC8  size 0xC */
int nn_mii_GetMoleColor()
{
  return __imp__ZN2nn3mii12GetMoleColorENS0_9GammaTypeE();
}

/* ============================================================================
 * nn_util_DecompressZlib
 * RVA 0x009ADED4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADED4  RVA 0x609ADED4  size 0xC */
int __fastcall nn_util_DecompressZlib(
        nn_util *v,
        void *a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  return __imp__ZN2nn4util14DecompressZlibEPvjPKvjS1_j(v, a2, a3, a4, a5, a6, a7);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_GetFirstBlock
 * RVA 0x009ADEE0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEE0  RVA 0x609ADEE0  size 0xC */
int __fastcall nn_util_BinaryFileHeader_GetFirstBlock(nn_util_BinaryFileHeader *v)
{
  return __imp__ZNK2nn4util16BinaryFileHeader13GetFirstBlockEv(v);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_GetAlignment
 * RVA 0x009ADEEC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEEC  RVA 0x609ADEEC  size 0xC */
int __fastcall nn_util_BinaryFileHeader_GetAlignment(nn_util_BinaryFileHeader *v)
{
  return __imp__ZNK2nn4util16BinaryFileHeader12GetAlignmentEv(v);
}

/* ============================================================================
 * nn_util_ReferSymbol
 * RVA 0x009ADEF8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADEF8  RVA 0x609ADEF8  size 0xC */
int __fastcall nn_util_ReferSymbol(nn_util *v, const void *a2)
{
  return __imp__ZN2nn4util11ReferSymbolEPKv(v, a2);
}

/* ============================================================================
 * nn_util_PickOutCharacterFromUtf8String
 * RVA 0x009ADF04   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF04  RVA 0x609ADF04  size 0xC */
int __fastcall nn_util_PickOutCharacterFromUtf8String(nn_util *v, char *a2, const char **a3)
{
  return __imp__ZN2nn4util30PickOutCharacterFromUtf8StringEPcPPKc(v, a2, a3);
}

/* ============================================================================
 * nn_util_ConvertCharacterUtf8ToUtf32
 * RVA 0x009ADF10   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF10  RVA 0x609ADF10  size 0xC */
int __fastcall nn_util_ConvertCharacterUtf8ToUtf32(nn_util *v, unsigned int *a2, const char *a3)
{
  return __imp__ZN2nn4util27ConvertCharacterUtf8ToUtf32EPjPKc(v, a2, a3);
}

/* ============================================================================
 * nn_util_SNPrintf
 * RVA 0x009ADF1C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF1C  RVA 0x609ADF1C  size 0xC */
int nn_util_SNPrintf(nn_util *v, char *a2, unsigned int a3, const char *a4, ...)
{
  return __imp__ZN2nn4util8SNPrintfEPcjPKcz(v, a2, a3, a4);
}

/* ============================================================================
 * sprintf
 * RVA 0x009ADF28   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF28  RVA 0x609ADF28  size 0xC */
int sprintf(char *s, const char *format, ...)
{
  return __imp_sprintf(s, format);
}

/* ============================================================================
 * strcat
 * RVA 0x009ADF34   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF34  RVA 0x609ADF34  size 0xC */
char *strcat(char *dest, const char *src)
{
  return __imp_strcat(dest, src);
}

/* ============================================================================
 * strcpy
 * RVA 0x009ADF40   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF40  RVA 0x609ADF40  size 0xC */
char *strcpy(char *dest, const char *src)
{
  return __imp_strcpy(dest, src);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_IsEndianReverse
 * RVA 0x009ADF4C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF4C  RVA 0x609ADF4C  size 0xC */
int __fastcall nn_util_BinaryFileHeader_IsEndianReverse(nn_util_BinaryFileHeader *v)
{
  return __imp__ZNK2nn4util16BinaryFileHeader15IsEndianReverseEv(v);
}

/* ============================================================================
 * _aeabi_memmove4
 * RVA 0x009ADF58   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF58  RVA 0x609ADF58  size 0xC */
void __fastcall _aeabi_memmove4(void *a1, const void *a2, size_t a3)
{
  memmove(a1, a2, a3);
}

/* ============================================================================
 * nn_util_BinaryFileHeader_IsSignatureValid
 * RVA 0x009ADF64   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF64  RVA 0x609ADF64  size 0xC */
int __fastcall nn_util_BinaryFileHeader_IsSignatureValid(nn_util_BinaryFileHeader *v, int a2, __int64 a3)
{
  return __imp__ZNK2nn4util16BinaryFileHeader16IsSignatureValidEx(v, a2, a3, HIDWORD(a3));
}

/* ============================================================================
 * nn_util_BinaryFileHeader_IsAlignmentValid
 * RVA 0x009ADF70   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF70  RVA 0x609ADF70  size 0xC */
int __fastcall nn_util_BinaryFileHeader_IsAlignmentValid(nn_util_BinaryFileHeader *v)
{
  return __imp__ZNK2nn4util16BinaryFileHeader16IsAlignmentValidEv(v);
}

/* ============================================================================
 * nn_util_BinaryBlockHeader_GetBlockSize
 * RVA 0x009ADF7C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF7C  RVA 0x609ADF7C  size 0xC */
int __fastcall nn_util_BinaryBlockHeader_GetBlockSize(nn_util_BinaryBlockHeader *v)
{
  return __imp__ZNK2nn4util17BinaryBlockHeader12GetBlockSizeEv(v);
}

/* ============================================================================
 * nn_lmem_CreateFrameHeap
 * RVA 0x009ADF88   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF88  RVA 0x609ADF88  size 0xC */
int __fastcall nn_lmem_CreateFrameHeap(nn_lmem *v, void *a2, unsigned int a3, int a4)
{
  return __imp__ZN2nn4lmem15CreateFrameHeapEPvji(v, a2, a3, a4);
}

/* ============================================================================
 * nn_lmem_AllocateFromFrameHeap
 * RVA 0x009ADF94   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADF94  RVA 0x609ADF94  size 0xC */
int nn_lmem_AllocateFromFrameHeap()
{
  return __imp__ZN2nn4lmem21AllocateFromFrameHeapEPNS0_6detail8HeapHeadEji();
}

/* ============================================================================
 * nn_lmem_DestroyFrameHeap
 * RVA 0x009ADFA0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFA0  RVA 0x609ADFA0  size 0xC */
int nn_lmem_DestroyFrameHeap()
{
  return __imp__ZN2nn4lmem16DestroyFrameHeapEPNS0_6detail8HeapHeadE();
}

/* ============================================================================
 * nn_diag_detail_AbortImpl
 * RVA 0x009ADFAC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFAC  RVA 0x609ADFAC  size 0xC */
int __fastcall nn_diag_detail_AbortImpl(
        nn_diag_detail *v,
        const char *a2,
        const char *a3,
        const char *a4,
        int a5)
{
  return __imp__ZN2nn4diag6detail9AbortImplEPKcS3_S3_i(v, a2, a3, a4, a5);
}

/* ============================================================================
 * strncat
 * RVA 0x009ADFB8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFB8  RVA 0x609ADFB8  size 0xC */
char *strncat(char *dest, const char *src, size_t n)
{
  return __imp_strncat(dest, src, n);
}

/* ============================================================================
 * nn_os_ClearEvent
 * RVA 0x009ADFC4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFC4  RVA 0x609ADFC4  size 0xC */
int nn_os_ClearEvent()
{
  return __imp__ZN2nn2os10ClearEventEPNS0_9EventTypeE();
}

/* ============================================================================
 * nn_audio_InitializeAudioRendererParameter
 * RVA 0x009ADFD0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFD0  RVA 0x609ADFD0  size 0xC */
int nn_audio_InitializeAudioRendererParameter()
{
  return __imp__ZN2nn5audio32InitializeAudioRendererParameterEPNS0_22AudioRendererParameterE();
}

/* ============================================================================
 * nn_audio_IsValidAudioRendererParameter
 * RVA 0x009ADFDC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFDC  RVA 0x609ADFDC  size 0xC */
int nn_audio_IsValidAudioRendererParameter()
{
  return __imp__ZN2nn5audio29IsValidAudioRendererParameterERKNS0_22AudioRendererParameterE();
}

/* ============================================================================
 * nn_audio_GetAudioRendererWorkBufferSize
 * RVA 0x009ADFE8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFE8  RVA 0x609ADFE8  size 0xC */
int nn_audio_GetAudioRendererWorkBufferSize()
{
  return __imp__ZN2nn5audio30GetAudioRendererWorkBufferSizeERKNS0_22AudioRendererParameterE();
}

/* ============================================================================
 * nn_audio_GetAudioRendererConfigWorkBufferSize
 * RVA 0x009ADFF4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609ADFF4  RVA 0x609ADFF4  size 0xC */
int nn_audio_GetAudioRendererConfigWorkBufferSize()
{
  return __imp__ZN2nn5audio36GetAudioRendererConfigWorkBufferSizeERKNS0_22AudioRendererParameterE();
}

/* ============================================================================
 * nn_audio_GetRequiredBufferSizeForCircularBufferSink
 * RVA 0x009AE000   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE000  RVA 0x609AE000  size 0xC */
int nn_audio_GetRequiredBufferSizeForCircularBufferSink()
{
  return __imp__ZN2nn5audio42GetRequiredBufferSizeForCircularBufferSinkEPKNS0_22AudioRendererParameterEiiNS0_12SampleFormatE();
}

/* ============================================================================
 * nn_audio_ReadCircularBufferSink
 * RVA 0x009AE00C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE00C  RVA 0x609AE00C  size 0xC */
int nn_audio_ReadCircularBufferSink()
{
  return __imp__ZN2nn5audio22ReadCircularBufferSinkEPNS0_22CircularBufferSinkTypeEPvj();
}

/* ============================================================================
 * nn_audio_AddCircularBufferSink
 * RVA 0x009AE018   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE018  RVA 0x609AE018  size 0xC */
int nn_audio_AddCircularBufferSink()
{
  return __imp__ZN2nn5audio21AddCircularBufferSinkEPNS0_19AudioRendererConfigEPNS0_22CircularBufferSinkTypeEPNS0_12FinalMixTypeEPKaiPvjNS0_12SampleFormatE();
}

/* ============================================================================
 * nn_diag_detail_AbortImpl
 * RVA 0x009AE024   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE024  RVA 0x609AE024  size 0xC */
int nn_diag_detail_AbortImpl()
{
  return __imp__ZN2nn4diag6detail9AbortImplEPKcS3_S3_iPKNS_6ResultES3_z();
}

/* ============================================================================
 * nn_audio_GetMemoryPoolState
 * RVA 0x009AE030   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE030  RVA 0x609AE030  size 0xC */
int nn_audio_GetMemoryPoolState()
{
  return __imp__ZN2nn5audio18GetMemoryPoolStateEPKNS0_14MemoryPoolTypeE();
}

/* ============================================================================
 * nn_os_SleepThread
 * RVA 0x009AE03C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE03C  RVA 0x609AE03C  size 0xC */
int nn_os_SleepThread()
{
  return __imp__ZN2nn2os11SleepThreadENS_8TimeSpanE();
}

/* ============================================================================
 * nn_audio_RequestUpdateAudioRenderer
 * RVA 0x009AE048   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE048  RVA 0x609AE048  size 0xC */
int nn_audio_RequestUpdateAudioRenderer()
{
  return __imp__ZN2nn5audio26RequestUpdateAudioRendererENS0_19AudioRendererHandleEPKNS0_19AudioRendererConfigE();
}

/* ============================================================================
 * nn_audio_RequestDetachMemoryPool
 * RVA 0x009AE054   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE054  RVA 0x609AE054  size 0xC */
int nn_audio_RequestDetachMemoryPool()
{
  return __imp__ZN2nn5audio23RequestDetachMemoryPoolEPNS0_14MemoryPoolTypeE();
}

/* ============================================================================
 * nn_audio_ExecuteAudioRendererRendering
 * RVA 0x009AE060   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE060  RVA 0x609AE060  size 0xC */
int nn_audio_ExecuteAudioRendererRendering()
{
  return __imp__ZN2nn5audio29ExecuteAudioRendererRenderingENS0_19AudioRendererHandleE();
}

/* ============================================================================
 * nn_os_WaitSystemEvent
 * RVA 0x009AE06C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE06C  RVA 0x609AE06C  size 0xC */
int nn_os_WaitSystemEvent()
{
  return __imp__ZN2nn2os15WaitSystemEventEPNS0_15SystemEventTypeE();
}

/* ============================================================================
 * nn_audio_ReleaseMemoryPool
 * RVA 0x009AE078   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE078  RVA 0x609AE078  size 0xC */
int nn_audio_ReleaseMemoryPool()
{
  return __imp__ZN2nn5audio17ReleaseMemoryPoolEPNS0_19AudioRendererConfigEPNS0_14MemoryPoolTypeE();
}

/* ============================================================================
 * nn_audio_GetRequiredBufferSizeForPerformanceFrames
 * RVA 0x009AE084   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE084  RVA 0x609AE084  size 0xC */
int nn_audio_GetRequiredBufferSizeForPerformanceFrames()
{
  return __imp__ZN2nn5audio41GetRequiredBufferSizeForPerformanceFramesERKNS0_22AudioRendererParameterE();
}

/* ============================================================================
 * nn_audio_OpenAudioRenderer
 * RVA 0x009AE090   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE090  RVA 0x609AE090  size 0xC */
int nn_audio_OpenAudioRenderer()
{
  return __imp__ZN2nn5audio17OpenAudioRendererEPNS0_19AudioRendererHandleEPNS_2os11SystemEventERKNS0_22AudioRendererParameterEPvj();
}

/* ============================================================================
 * nn_audio_InitializeAudioRendererConfig
 * RVA 0x009AE09C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE09C  RVA 0x609AE09C  size 0xC */
int nn_audio_InitializeAudioRendererConfig()
{
  return __imp__ZN2nn5audio29InitializeAudioRendererConfigEPNS0_19AudioRendererConfigERKNS0_22AudioRendererParameterEPvj();
}

/* ============================================================================
 * nn_audio_AddDeviceSink
 * RVA 0x009AE0A8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0A8  RVA 0x609AE0A8  size 0xC */
int nn_audio_AddDeviceSink()
{
  return __imp__ZN2nn5audio13AddDeviceSinkEPNS0_19AudioRendererConfigEPNS0_14DeviceSinkTypeEPNS0_12FinalMixTypeEPKaiPKc();
}

/* ============================================================================
 * nn_audio_SetDownMixParameter
 * RVA 0x009AE0B4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0B4  RVA 0x609AE0B4  size 0xC */
int nn_audio_SetDownMixParameter()
{
  return __imp__ZN2nn5audio19SetDownMixParameterEPNS0_14DeviceSinkTypeEPKNS1_16DownMixParameterE();
}

/* ============================================================================
 * nn_audio_SetDownMixParameterEnabled
 * RVA 0x009AE0C0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0C0  RVA 0x609AE0C0  size 0xC */
int nn_audio_SetDownMixParameterEnabled()
{
  return __imp__ZN2nn5audio26SetDownMixParameterEnabledEPNS0_14DeviceSinkTypeEb();
}

/* ============================================================================
 * nn_audio_StartAudioRenderer
 * RVA 0x009AE0CC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0CC  RVA 0x609AE0CC  size 0xC */
int nn_audio_StartAudioRenderer()
{
  return __imp__ZN2nn5audio18StartAudioRendererENS0_19AudioRendererHandleE();
}

/* ============================================================================
 * nn_audio_StopAudioRenderer
 * RVA 0x009AE0D8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0D8  RVA 0x609AE0D8  size 0xC */
int nn_audio_StopAudioRenderer()
{
  return __imp__ZN2nn5audio17StopAudioRendererENS0_19AudioRendererHandleE();
}

/* ============================================================================
 * nn_audio_CloseAudioRenderer
 * RVA 0x009AE0E4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0E4  RVA 0x609AE0E4  size 0xC */
int nn_audio_CloseAudioRenderer()
{
  return __imp__ZN2nn5audio18CloseAudioRendererENS0_19AudioRendererHandleE();
}

/* ============================================================================
 * nn_os_TimedWaitSystemEvent
 * RVA 0x009AE0F0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0F0  RVA 0x609AE0F0  size 0xC */
int nn_os_TimedWaitSystemEvent()
{
  return __imp__ZN2nn2os20TimedWaitSystemEventEPNS0_15SystemEventTypeENS_8TimeSpanE();
}

/* ============================================================================
 * nn_os_FinalizeEvent
 * RVA 0x009AE0FC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE0FC  RVA 0x609AE0FC  size 0xC */
int nn_os_FinalizeEvent()
{
  return __imp__ZN2nn2os13FinalizeEventEPNS0_9EventTypeE();
}

/* ============================================================================
 * nn_os_TryWaitEvent
 * RVA 0x009AE108   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE108  RVA 0x609AE108  size 0xC */
int nn_os_TryWaitEvent()
{
  return __imp__ZN2nn2os12TryWaitEventEPNS0_9EventTypeE();
}

/* ============================================================================
 * nn_os_WaitEvent
 * RVA 0x009AE114   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE114  RVA 0x609AE114  size 0xC */
int nn_os_WaitEvent()
{
  return __imp__ZN2nn2os9WaitEventEPNS0_9EventTypeE();
}

/* ============================================================================
 * _aeabi_f2ulz
 * RVA 0x009AE120   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE120  RVA 0x609AE120  size 0xC */
unsigned __int64 __fastcall _aeabi_f2ulz(int a1)
{
  return (unsigned __int64)*(float *)&a1;
}

/* ============================================================================
 * nn_os_FinalizeMessageQueue
 * RVA 0x009AE12C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE12C  RVA 0x609AE12C  size 0xC */
int nn_os_FinalizeMessageQueue()
{
  return __imp__ZN2nn2os20FinalizeMessageQueueEPNS0_16MessageQueueTypeE();
}

/* ============================================================================
 * nn_os_InitializeMessageQueue
 * RVA 0x009AE138   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE138  RVA 0x609AE138  size 0xC */
int nn_os_InitializeMessageQueue()
{
  return __imp__ZN2nn2os22InitializeMessageQueueEPNS0_16MessageQueueTypeEPjj();
}

/* ============================================================================
 * nn_os_TryReceiveMessageQueue
 * RVA 0x009AE144   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE144  RVA 0x609AE144  size 0xC */
int nn_os_TryReceiveMessageQueue()
{
  return __imp__ZN2nn2os22TryReceiveMessageQueueEPjPNS0_16MessageQueueTypeE();
}

/* ============================================================================
 * nn_os_TrySendMessageQueue
 * RVA 0x009AE150   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE150  RVA 0x609AE150  size 0xC */
int nn_os_TrySendMessageQueue()
{
  return __imp__ZN2nn2os19TrySendMessageQueueEPNS0_16MessageQueueTypeEj();
}

/* ============================================================================
 * nn_os_SendMessageQueue
 * RVA 0x009AE15C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE15C  RVA 0x609AE15C  size 0xC */
int nn_os_SendMessageQueue()
{
  return __imp__ZN2nn2os16SendMessageQueueEPNS0_16MessageQueueTypeEj();
}

/* ============================================================================
 * nn_os_ReceiveMessageQueue
 * RVA 0x009AE168   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE168  RVA 0x609AE168  size 0xC */
int nn_os_ReceiveMessageQueue()
{
  return __imp__ZN2nn2os19ReceiveMessageQueueEPjPNS0_16MessageQueueTypeE();
}

/* ============================================================================
 * nn_os_JamMessageQueue
 * RVA 0x009AE174   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE174  RVA 0x609AE174  size 0xC */
int nn_os_JamMessageQueue()
{
  return __imp__ZN2nn2os15JamMessageQueueEPNS0_16MessageQueueTypeEj();
}

/* ============================================================================
 * nn_audio_SetPerformanceFrameBuffer
 * RVA 0x009AE180   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE180  RVA 0x609AE180  size 0xC */
int nn_audio_SetPerformanceFrameBuffer()
{
  return __imp__ZN2nn5audio25SetPerformanceFrameBufferEPNS0_19AudioRendererConfigEPvj();
}

/* ============================================================================
 * nn_audio_PerformanceInfo_PerformanceInfo
 * RVA 0x009AE18C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE18C  RVA 0x609AE18C  size 0xC */
int __fastcall nn_audio_PerformanceInfo_PerformanceInfo(nn_audio_PerformanceInfo *v)
{
  return __imp__ZN2nn5audio15PerformanceInfoC1Ev(v);
}

/* ============================================================================
 * nn_audio_PerformanceInfo_SetBuffer
 * RVA 0x009AE198   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE198  RVA 0x609AE198  size 0xC */
int __fastcall nn_audio_PerformanceInfo_SetBuffer(nn_audio_PerformanceInfo *v, const void *a2, unsigned int a3)
{
  return __imp__ZN2nn5audio15PerformanceInfo9SetBufferEPKvj(v, a2, a3);
}

/* ============================================================================
 * nn_audio_PerformanceInfo_MoveToNextFrame
 * RVA 0x009AE1A4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1A4  RVA 0x609AE1A4  size 0xC */
int __fastcall nn_audio_PerformanceInfo_MoveToNextFrame(nn_audio_PerformanceInfo *v)
{
  return __imp__ZN2nn5audio15PerformanceInfo15MoveToNextFrameEv(v);
}

/* ============================================================================
 * nn_audio_PerformanceInfo_GetEntries
 * RVA 0x009AE1BC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1BC  RVA 0x609AE1BC  size 0xC */
int __fastcall nn_audio_PerformanceInfo_GetEntries(nn_audio_PerformanceInfo *v, int *a2)
{
  return __imp__ZN2nn5audio15PerformanceInfo10GetEntriesEPi(v, a2);
}

/* ============================================================================
 * nn_audio_PerformanceInfo_GetTotalProcessingTime
 * RVA 0x009AE1C8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1C8  RVA 0x609AE1C8  size 0xC */
int __fastcall nn_audio_PerformanceInfo_GetTotalProcessingTime(nn_audio_PerformanceInfo *v)
{
  return __imp__ZN2nn5audio15PerformanceInfo22GetTotalProcessingTimeEv(v);
}

/* ============================================================================
 * nn_os_ConvertToTick
 * RVA 0x009AE1D4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1D4  RVA 0x609AE1D4  size 0xC */
int nn_os_ConvertToTick()
{
  return __imp__ZN2nn2os13ConvertToTickENS_8TimeSpanE();
}

/* ============================================================================
 * nn_audio_GetSubMixNodeId
 * RVA 0x009AE1E0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1E0  RVA 0x609AE1E0  size 0xC */
int nn_audio_GetSubMixNodeId()
{
  return __imp__ZN2nn5audio15GetSubMixNodeIdEPKNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_GetSinkNodeId
 * RVA 0x009AE1EC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1EC  RVA 0x609AE1EC  size 0xC */
int nn_audio_GetSinkNodeId()
{
  return __imp__ZN2nn5audio13GetSinkNodeIdEPKNS0_14DeviceSinkTypeE();
}

/* ============================================================================
 * nn_audio_GetSinkNodeId
 * RVA 0x009AE1F8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE1F8  RVA 0x609AE1F8  size 0xC */
int nn_audio_GetSinkNodeId()
{
  return __imp__ZN2nn5audio13GetSinkNodeIdEPKNS0_22CircularBufferSinkTypeE();
}

/* ============================================================================
 * nn_os_InitializeEvent
 * RVA 0x009AE204   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE204  RVA 0x609AE204  size 0xC */
int nn_os_InitializeEvent()
{
  return __imp__ZN2nn2os15InitializeEventEPNS0_9EventTypeEbNS0_14EventClearModeE();
}

/* ============================================================================
 * nn_os_SignalEvent
 * RVA 0x009AE210   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE210  RVA 0x609AE210  size 0xC */
int nn_os_SignalEvent()
{
  return __imp__ZN2nn2os11SignalEventEPNS0_9EventTypeE();
}

/* ============================================================================
 * nn_audio_GetVoicePlayedSampleCount
 * RVA 0x009AE21C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE21C  RVA 0x609AE21C  size 0xC */
int nn_audio_GetVoicePlayedSampleCount()
{
  return __imp__ZN2nn5audio25GetVoicePlayedSampleCountEPKNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_SetVoiceVolume
 * RVA 0x009AE228   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE228  RVA 0x609AE228  size 0xC */
int nn_audio_SetVoiceVolume()
{
  return __imp__ZN2nn5audio14SetVoiceVolumeEPNS0_9VoiceTypeEf();
}

/* ============================================================================
 * nn_audio_SetVoicePitch
 * RVA 0x009AE234   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE234  RVA 0x609AE234  size 0xC */
int nn_audio_SetVoicePitch()
{
  return __imp__ZN2nn5audio13SetVoicePitchEPNS0_9VoiceTypeEf();
}

/* ============================================================================
 * nn_audio_SetVoiceBiquadFilterParameter
 * RVA 0x009AE240   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE240  RVA 0x609AE240  size 0xC */
int nn_audio_SetVoiceBiquadFilterParameter()
{
  return __imp__ZN2nn5audio29SetVoiceBiquadFilterParameterEPNS0_9VoiceTypeEiRKNS0_21BiquadFilterParameterE();
}

/* ============================================================================
 * nn_audio_SetVoicePlayState
 * RVA 0x009AE24C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE24C  RVA 0x609AE24C  size 0xC */
int nn_audio_SetVoicePlayState()
{
  return __imp__ZN2nn5audio17SetVoicePlayStateEPNS0_9VoiceTypeENS1_9PlayStateE();
}

/* ============================================================================
 * nn_audio_IsVoiceValid
 * RVA 0x009AE258   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE258  RVA 0x609AE258  size 0xC */
int nn_audio_IsVoiceValid()
{
  return __imp__ZN2nn5audio12IsVoiceValidEPKNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_SetVoicePriority
 * RVA 0x009AE264   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE264  RVA 0x609AE264  size 0xC */
int nn_audio_SetVoicePriority()
{
  return __imp__ZN2nn5audio16SetVoicePriorityEPNS0_9VoiceTypeEi();
}

/* ============================================================================
 * nn_audio_AcquireVoiceSlot
 * RVA 0x009AE270   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE270  RVA 0x609AE270  size 0xC */
int nn_audio_AcquireVoiceSlot()
{
  return __imp__ZN2nn5audio16AcquireVoiceSlotEPNS0_19AudioRendererConfigEPNS0_9VoiceTypeEiiNS0_12SampleFormatEiPKvj();
}

/* ============================================================================
 * nn_audio_SetVoiceDestination
 * RVA 0x009AE27C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE27C  RVA 0x609AE27C  size 0xC */
int nn_audio_SetVoiceDestination()
{
  return __imp__ZN2nn5audio19SetVoiceDestinationEPNS0_19AudioRendererConfigEPNS0_9VoiceTypeEPNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_SetVoiceDestination
 * RVA 0x009AE288   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE288  RVA 0x609AE288  size 0xC */
int nn_audio_SetVoiceDestination()
{
  return __imp__ZN2nn5audio19SetVoiceDestinationEPNS0_19AudioRendererConfigEPNS0_9VoiceTypeEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_audio_GetVoiceNodeId
 * RVA 0x009AE294   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE294  RVA 0x609AE294  size 0xC */
int nn_audio_GetVoiceNodeId()
{
  return __imp__ZN2nn5audio14GetVoiceNodeIdEPKNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_ReleaseVoiceSlot
 * RVA 0x009AE2A0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2A0  RVA 0x609AE2A0  size 0xC */
int nn_audio_ReleaseVoiceSlot()
{
  return __imp__ZN2nn5audio16ReleaseVoiceSlotEPNS0_19AudioRendererConfigEPNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_SetVoiceMixVolume
 * RVA 0x009AE2AC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2AC  RVA 0x609AE2AC  size 0xC */
int nn_audio_SetVoiceMixVolume()
{
  return __imp__ZN2nn5audio17SetVoiceMixVolumeEPNS0_9VoiceTypeEPNS0_12FinalMixTypeEfii();
}

/* ============================================================================
 * nn_audio_SetVoiceMixVolume
 * RVA 0x009AE2B8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2B8  RVA 0x609AE2B8  size 0xC */
int nn_audio_SetVoiceMixVolume()
{
  return __imp__ZN2nn5audio17SetVoiceMixVolumeEPNS0_9VoiceTypeEPNS0_10SubMixTypeEfii();
}

/* ============================================================================
 * nn_audio_GetReleasedWaveBuffer
 * RVA 0x009AE2C4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2C4  RVA 0x609AE2C4  size 0xC */
int nn_audio_GetReleasedWaveBuffer()
{
  return __imp__ZN2nn5audio21GetReleasedWaveBufferEPNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_AppendWaveBuffer
 * RVA 0x009AE2D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2D0  RVA 0x609AE2D0  size 0xC */
int nn_audio_AppendWaveBuffer()
{
  return __imp__ZN2nn5audio16AppendWaveBufferEPNS0_9VoiceTypeEPKNS0_10WaveBufferE();
}

/* ============================================================================
 * nn_audio_GetVoicePlayState
 * RVA 0x009AE2DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2DC  RVA 0x609AE2DC  size 0xC */
int nn_audio_GetVoicePlayState()
{
  return __imp__ZN2nn5audio17GetVoicePlayStateEPKNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_IsVoiceDroppedFlagOn
 * RVA 0x009AE2E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2E8  RVA 0x609AE2E8  size 0xC */
int nn_audio_IsVoiceDroppedFlagOn()
{
  return __imp__ZN2nn5audio20IsVoiceDroppedFlagOnEPKNS0_9VoiceTypeE();
}

/* ============================================================================
 * nn_audio_GetRequiredBufferSizeForAuxSendReturnBuffer
 * RVA 0x009AE2F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE2F4  RVA 0x609AE2F4  size 0xC */
int nn_audio_GetRequiredBufferSizeForAuxSendReturnBuffer()
{
  return __imp__ZN2nn5audio43GetRequiredBufferSizeForAuxSendReturnBufferEPKNS0_22AudioRendererParameterEii();
}

/* ============================================================================
 * nn_audio_AddAux
 * RVA 0x009AE300   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE300  RVA 0x609AE300  size 0xC */
int nn_audio_AddAux()
{
  return __imp__ZN2nn5audio6AddAuxEPNS0_19AudioRendererConfigEPNS0_7AuxTypeEPNS0_10SubMixTypeEPvS7_j();
}

/* ============================================================================
 * nn_audio_AddAux
 * RVA 0x009AE30C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE30C  RVA 0x609AE30C  size 0xC */
int nn_audio_AddAux()
{
  return __imp__ZN2nn5audio6AddAuxEPNS0_19AudioRendererConfigEPNS0_7AuxTypeEPNS0_12FinalMixTypeEPvS7_j();
}

/* ============================================================================
 * nn_audio_SetAuxEnabled
 * RVA 0x009AE318   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE318  RVA 0x609AE318  size 0xC */
int nn_audio_SetAuxEnabled()
{
  return __imp__ZN2nn5audio13SetAuxEnabledEPNS0_7AuxTypeEb();
}

/* ============================================================================
 * nn_audio_SetAuxInputOutput
 * RVA 0x009AE324   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE324  RVA 0x609AE324  size 0xC */
int nn_audio_SetAuxInputOutput()
{
  return __imp__ZN2nn5audio17SetAuxInputOutputEPNS0_7AuxTypeEPKaS4_i();
}

/* ============================================================================
 * nn_audio_RemoveAux
 * RVA 0x009AE330   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE330  RVA 0x609AE330  size 0xC */
int nn_audio_RemoveAux()
{
  return __imp__ZN2nn5audio9RemoveAuxEPNS0_19AudioRendererConfigEPNS0_7AuxTypeEPNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_RemoveAux
 * RVA 0x009AE33C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE33C  RVA 0x609AE33C  size 0xC */
int nn_audio_RemoveAux()
{
  return __imp__ZN2nn5audio9RemoveAuxEPNS0_19AudioRendererConfigEPNS0_7AuxTypeEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_audio_GetAuxSampleCount
 * RVA 0x009AE348   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE348  RVA 0x609AE348  size 0xC */
int nn_audio_GetAuxSampleCount()
{
  return __imp__ZN2nn5audio17GetAuxSampleCountEPKNS0_7AuxTypeE();
}

/* ============================================================================
 * nn_audio_GetAuxSampleRate
 * RVA 0x009AE354   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE354  RVA 0x609AE354  size 0xC */
int nn_audio_GetAuxSampleRate()
{
  return __imp__ZN2nn5audio16GetAuxSampleRateEPKNS0_7AuxTypeE();
}

/* ============================================================================
 * nn_audio_ReadAuxSendBuffer
 * RVA 0x009AE360   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE360  RVA 0x609AE360  size 0xC */
int nn_audio_ReadAuxSendBuffer()
{
  return __imp__ZN2nn5audio17ReadAuxSendBufferEPNS0_7AuxTypeEPii();
}

/* ============================================================================
 * nn_audio_WriteAuxReturnBuffer
 * RVA 0x009AE36C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE36C  RVA 0x609AE36C  size 0xC */
int nn_audio_WriteAuxReturnBuffer()
{
  return __imp__ZN2nn5audio20WriteAuxReturnBufferEPNS0_7AuxTypeEPKii();
}

/* ============================================================================
 * nn_audio_GetRequiredBufferSizeForDelay
 * RVA 0x009AE378   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE378  RVA 0x609AE378  size 0xC */
int nn_audio_GetRequiredBufferSizeForDelay()
{
  return __imp__ZN2nn5audio29GetRequiredBufferSizeForDelayENS_8TimeSpanEii();
}

/* ============================================================================
 * nn_audio_AddDelay
 * RVA 0x009AE384   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE384  RVA 0x609AE384  size 0xC */
int nn_audio_AddDelay()
{
  return __imp__ZN2nn5audio8AddDelayEPNS0_19AudioRendererConfigEPNS0_9DelayTypeEPvjPNS0_10SubMixTypeENS_8TimeSpanEi();
}

/* ============================================================================
 * nn_audio_AddDelay
 * RVA 0x009AE390   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE390  RVA 0x609AE390  size 0xC */
int nn_audio_AddDelay()
{
  return __imp__ZN2nn5audio8AddDelayEPNS0_19AudioRendererConfigEPNS0_9DelayTypeEPvjPNS0_12FinalMixTypeENS_8TimeSpanEi();
}

/* ============================================================================
 * nn_audio_SetDelayTime
 * RVA 0x009AE39C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE39C  RVA 0x609AE39C  size 0xC */
int nn_audio_SetDelayTime()
{
  return __imp__ZN2nn5audio12SetDelayTimeEPNS0_9DelayTypeENS_8TimeSpanE();
}

/* ============================================================================
 * nn_audio_SetDelayInGain
 * RVA 0x009AE3A8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3A8  RVA 0x609AE3A8  size 0xC */
int nn_audio_SetDelayInGain()
{
  return __imp__ZN2nn5audio14SetDelayInGainEPNS0_9DelayTypeEf();
}

/* ============================================================================
 * nn_audio_SetDelayFeedbackGain
 * RVA 0x009AE3B4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3B4  RVA 0x609AE3B4  size 0xC */
int nn_audio_SetDelayFeedbackGain()
{
  return __imp__ZN2nn5audio20SetDelayFeedbackGainEPNS0_9DelayTypeEf();
}

/* ============================================================================
 * nn_audio_SetDelayDryGain
 * RVA 0x009AE3C0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3C0  RVA 0x609AE3C0  size 0xC */
int nn_audio_SetDelayDryGain()
{
  return __imp__ZN2nn5audio15SetDelayDryGainEPNS0_9DelayTypeEf();
}

/* ============================================================================
 * nn_audio_SetDelayLowPassAmount
 * RVA 0x009AE3CC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3CC  RVA 0x609AE3CC  size 0xC */
int nn_audio_SetDelayLowPassAmount()
{
  return __imp__ZN2nn5audio21SetDelayLowPassAmountEPNS0_9DelayTypeEf();
}

/* ============================================================================
 * nn_audio_SetDelayChannelSpread
 * RVA 0x009AE3D8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3D8  RVA 0x609AE3D8  size 0xC */
int nn_audio_SetDelayChannelSpread()
{
  return __imp__ZN2nn5audio21SetDelayChannelSpreadEPNS0_9DelayTypeEf();
}

/* ============================================================================
 * nn_audio_SetDelayEnabled
 * RVA 0x009AE3E4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3E4  RVA 0x609AE3E4  size 0xC */
int nn_audio_SetDelayEnabled()
{
  return __imp__ZN2nn5audio15SetDelayEnabledEPNS0_9DelayTypeEb();
}

/* ============================================================================
 * nn_audio_SetDelayInputOutput
 * RVA 0x009AE3F0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3F0  RVA 0x609AE3F0  size 0xC */
int nn_audio_SetDelayInputOutput()
{
  return __imp__ZN2nn5audio19SetDelayInputOutputEPNS0_9DelayTypeEPKaS4_i();
}

/* ============================================================================
 * nn_audio_RemoveDelay
 * RVA 0x009AE3FC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE3FC  RVA 0x609AE3FC  size 0xC */
int nn_audio_RemoveDelay()
{
  return __imp__ZN2nn5audio11RemoveDelayEPNS0_19AudioRendererConfigEPNS0_9DelayTypeEPNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_RemoveDelay
 * RVA 0x009AE408   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE408  RVA 0x609AE408  size 0xC */
int nn_audio_RemoveDelay()
{
  return __imp__ZN2nn5audio11RemoveDelayEPNS0_19AudioRendererConfigEPNS0_9DelayTypeEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_audio_IsDelayRemovable
 * RVA 0x009AE414   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE414  RVA 0x609AE414  size 0xC */
int nn_audio_IsDelayRemovable()
{
  return __imp__ZN2nn5audio16IsDelayRemovableEPKNS0_9DelayTypeE();
}

/* ============================================================================
 * nn_audio_GetRequiredBufferSizeForReverb
 * RVA 0x009AE420   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE420  RVA 0x609AE420  size 0xC */
int __fastcall nn_audio_GetRequiredBufferSizeForReverb(nn_audio *v, int a2, int a3)
{
  return __imp__ZN2nn5audio30GetRequiredBufferSizeForReverbEii(v, a2, a3);
}

/* ============================================================================
 * nn_audio_AddReverb
 * RVA 0x009AE42C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE42C  RVA 0x609AE42C  size 0xC */
int nn_audio_AddReverb()
{
  return __imp__ZN2nn5audio9AddReverbEPNS0_19AudioRendererConfigEPNS0_10ReverbTypeEPvjPNS0_10SubMixTypeEi();
}

/* ============================================================================
 * nn_audio_AddReverb
 * RVA 0x009AE438   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE438  RVA 0x609AE438  size 0xC */
int nn_audio_AddReverb()
{
  return __imp__ZN2nn5audio9AddReverbEPNS0_19AudioRendererConfigEPNS0_10ReverbTypeEPvjPNS0_12FinalMixTypeEi();
}

/* ============================================================================
 * nn_audio_SetReverbEarlyMode
 * RVA 0x009AE444   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE444  RVA 0x609AE444  size 0xC */
int nn_audio_SetReverbEarlyMode()
{
  return __imp__ZN2nn5audio18SetReverbEarlyModeEPNS0_10ReverbTypeENS1_9EarlyModeE();
}

/* ============================================================================
 * nn_audio_SetReverbEarlyGain
 * RVA 0x009AE450   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE450  RVA 0x609AE450  size 0xC */
int nn_audio_SetReverbEarlyGain()
{
  return __imp__ZN2nn5audio18SetReverbEarlyGainEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbPredelayTime
 * RVA 0x009AE45C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE45C  RVA 0x609AE45C  size 0xC */
int nn_audio_SetReverbPredelayTime()
{
  return __imp__ZN2nn5audio21SetReverbPredelayTimeEPNS0_10ReverbTypeENS_8TimeSpanE();
}

/* ============================================================================
 * nn_audio_SetReverbLateMode
 * RVA 0x009AE468   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE468  RVA 0x609AE468  size 0xC */
int nn_audio_SetReverbLateMode()
{
  return __imp__ZN2nn5audio17SetReverbLateModeEPNS0_10ReverbTypeENS1_8LateModeE();
}

/* ============================================================================
 * nn_audio_SetReverbLateGain
 * RVA 0x009AE474   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE474  RVA 0x609AE474  size 0xC */
int nn_audio_SetReverbLateGain()
{
  return __imp__ZN2nn5audio17SetReverbLateGainEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbDecayTime
 * RVA 0x009AE480   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE480  RVA 0x609AE480  size 0xC */
int nn_audio_SetReverbDecayTime()
{
  return __imp__ZN2nn5audio18SetReverbDecayTimeEPNS0_10ReverbTypeENS_8TimeSpanE();
}

/* ============================================================================
 * nn_audio_SetReverbHighFrequencyDecayRatio
 * RVA 0x009AE48C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE48C  RVA 0x609AE48C  size 0xC */
int nn_audio_SetReverbHighFrequencyDecayRatio()
{
  return __imp__ZN2nn5audio32SetReverbHighFrequencyDecayRatioEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbColoration
 * RVA 0x009AE498   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE498  RVA 0x609AE498  size 0xC */
int nn_audio_SetReverbColoration()
{
  return __imp__ZN2nn5audio19SetReverbColorationEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbReverbGain
 * RVA 0x009AE4A4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4A4  RVA 0x609AE4A4  size 0xC */
int nn_audio_SetReverbReverbGain()
{
  return __imp__ZN2nn5audio19SetReverbReverbGainEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbOutGain
 * RVA 0x009AE4B0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4B0  RVA 0x609AE4B0  size 0xC */
int nn_audio_SetReverbOutGain()
{
  return __imp__ZN2nn5audio16SetReverbOutGainEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbDryGain
 * RVA 0x009AE4BC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4BC  RVA 0x609AE4BC  size 0xC */
int nn_audio_SetReverbDryGain()
{
  return __imp__ZN2nn5audio16SetReverbDryGainEPNS0_10ReverbTypeEf();
}

/* ============================================================================
 * nn_audio_SetReverbEnabled
 * RVA 0x009AE4C8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4C8  RVA 0x609AE4C8  size 0xC */
int nn_audio_SetReverbEnabled()
{
  return __imp__ZN2nn5audio16SetReverbEnabledEPNS0_10ReverbTypeEb();
}

/* ============================================================================
 * nn_audio_SetReverbInputOutput
 * RVA 0x009AE4D4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4D4  RVA 0x609AE4D4  size 0xC */
int nn_audio_SetReverbInputOutput()
{
  return __imp__ZN2nn5audio20SetReverbInputOutputEPNS0_10ReverbTypeEPKaS4_i();
}

/* ============================================================================
 * nn_audio_RemoveReverb
 * RVA 0x009AE4E0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4E0  RVA 0x609AE4E0  size 0xC */
int nn_audio_RemoveReverb()
{
  return __imp__ZN2nn5audio12RemoveReverbEPNS0_19AudioRendererConfigEPNS0_10ReverbTypeEPNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_RemoveReverb
 * RVA 0x009AE4EC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4EC  RVA 0x609AE4EC  size 0xC */
int nn_audio_RemoveReverb()
{
  return __imp__ZN2nn5audio12RemoveReverbEPNS0_19AudioRendererConfigEPNS0_10ReverbTypeEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_audio_IsReverbRemovable
 * RVA 0x009AE4F8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE4F8  RVA 0x609AE4F8  size 0xC */
int nn_audio_IsReverbRemovable()
{
  return __imp__ZN2nn5audio17IsReverbRemovableEPKNS0_10ReverbTypeE();
}

/* ============================================================================
 * nn_fs_FlushFile
 * RVA 0x009AE504   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE504  RVA 0x609AE504  size 0xC */
int nn_fs_FlushFile()
{
  return __imp__ZN2nn2fs9FlushFileENS0_10FileHandleE();
}

/* ============================================================================
 * nn_fs_ReadFile
 * RVA 0x009AE510   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE510  RVA 0x609AE510  size 0xC */
int nn_fs_ReadFile()
{
  return __imp__ZN2nn2fs8ReadFileEPjNS0_10FileHandleExPvj();
}

/* ============================================================================
 * nn_fs_WriteFile
 * RVA 0x009AE51C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE51C  RVA 0x609AE51C  size 0xC */
int nn_fs_WriteFile()
{
  return __imp__ZN2nn2fs9WriteFileENS0_10FileHandleExPKvjRKNS0_11WriteOptionE();
}

/* ============================================================================
 * nn_os_CreateThread
 * RVA 0x009AE528   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE528  RVA 0x609AE528  size 0xC */
int nn_os_CreateThread()
{
  return __imp__ZN2nn2os12CreateThreadEPNS0_10ThreadTypeEPFvPvES3_S3_jii();
}

/* ============================================================================
 * nn_os_StartThread
 * RVA 0x009AE534   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE534  RVA 0x609AE534  size 0xC */
int nn_os_StartThread()
{
  return __imp__ZN2nn2os11StartThreadEPNS0_10ThreadTypeE();
}

/* ============================================================================
 * nn_os_DestroyThread
 * RVA 0x009AE540   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE540  RVA 0x609AE540  size 0xC */
int nn_os_DestroyThread()
{
  return __imp__ZN2nn2os13DestroyThreadEPNS0_10ThreadTypeE();
}

/* ============================================================================
 * nn_os_SetThreadNamePointer
 * RVA 0x009AE54C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE54C  RVA 0x609AE54C  size 0xC */
int nn_os_SetThreadNamePointer()
{
  return __imp__ZN2nn2os20SetThreadNamePointerEPNS0_10ThreadTypeEPKc();
}

/* ============================================================================
 * nn_os_SetThreadCoreMask
 * RVA 0x009AE558   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE558  RVA 0x609AE558  size 0xC */
int nn_os_SetThreadCoreMask()
{
  return __imp__ZN2nn2os17SetThreadCoreMaskEPNS0_10ThreadTypeEiy();
}

/* ============================================================================
 * nn_os_WaitThread
 * RVA 0x009AE564   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE564  RVA 0x609AE564  size 0xC */
int nn_os_WaitThread()
{
  return __imp__ZN2nn2os10WaitThreadEPNS0_10ThreadTypeE();
}

/* ============================================================================
 * nn_audio_AcquireFinalMix
 * RVA 0x009AE570   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE570  RVA 0x609AE570  size 0xC */
int nn_audio_AcquireFinalMix()
{
  return __imp__ZN2nn5audio15AcquireFinalMixEPNS0_19AudioRendererConfigEPNS0_12FinalMixTypeEi();
}

/* ============================================================================
 * nn_audio_ReleaseFinalMix
 * RVA 0x009AE57C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE57C  RVA 0x609AE57C  size 0xC */
int nn_audio_ReleaseFinalMix()
{
  return __imp__ZN2nn5audio15ReleaseFinalMixEPNS0_19AudioRendererConfigEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_audio_AcquireSubMix
 * RVA 0x009AE588   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE588  RVA 0x609AE588  size 0xC */
int nn_audio_AcquireSubMix()
{
  return __imp__ZN2nn5audio13AcquireSubMixEPNS0_19AudioRendererConfigEPNS0_10SubMixTypeEii();
}

/* ============================================================================
 * nn_audio_ReleaseSubMix
 * RVA 0x009AE594   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE594  RVA 0x609AE594  size 0xC */
int nn_audio_ReleaseSubMix()
{
  return __imp__ZN2nn5audio13ReleaseSubMixEPNS0_19AudioRendererConfigEPNS0_10SubMixTypeE();
}

/* ============================================================================
 * nn_audio_SetSubMixVolume
 * RVA 0x009AE5A0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5A0  RVA 0x609AE5A0  size 0xC */
int nn_audio_SetSubMixVolume()
{
  return __imp__ZN2nn5audio15SetSubMixVolumeEPNS0_10SubMixTypeEf();
}

/* ============================================================================
 * nn_audio_SetSubMixMixVolume
 * RVA 0x009AE5AC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5AC  RVA 0x609AE5AC  size 0xC */
int nn_audio_SetSubMixMixVolume()
{
  return __imp__ZN2nn5audio18SetSubMixMixVolumeEPNS0_10SubMixTypeES2_fii();
}

/* ============================================================================
 * nn_audio_SetSubMixMixVolume
 * RVA 0x009AE5B8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5B8  RVA 0x609AE5B8  size 0xC */
int nn_audio_SetSubMixMixVolume()
{
  return __imp__ZN2nn5audio18SetSubMixMixVolumeEPNS0_10SubMixTypeEPNS0_12FinalMixTypeEfii();
}

/* ============================================================================
 * nn_audio_SetSubMixDestination
 * RVA 0x009AE5C4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5C4  RVA 0x609AE5C4  size 0xC */
int nn_audio_SetSubMixDestination()
{
  return __imp__ZN2nn5audio20SetSubMixDestinationEPNS0_19AudioRendererConfigEPNS0_10SubMixTypeES4_();
}

/* ============================================================================
 * nn_audio_SetSubMixDestination
 * RVA 0x009AE5D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5D0  RVA 0x609AE5D0  size 0xC */
int nn_audio_SetSubMixDestination()
{
  return __imp__ZN2nn5audio20SetSubMixDestinationEPNS0_19AudioRendererConfigEPNS0_10SubMixTypeEPNS0_12FinalMixTypeE();
}

/* ============================================================================
 * nn_hid_InitializeNpad
 * RVA 0x009AE5DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5DC  RVA 0x609AE5DC  size 0xC */
int __fastcall nn_hid_InitializeNpad(nn_hid *v)
{
  return __imp__ZN2nn3hid14InitializeNpadEv(v);
}

/* ============================================================================
 * nn_hid_SetSupportedNpadIdType
 * RVA 0x009AE5E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5E8  RVA 0x609AE5E8  size 0xC */
int __fastcall nn_hid_SetSupportedNpadIdType(nn_hid *v, const unsigned int *a2, unsigned int a3)
{
  return __imp__ZN2nn3hid22SetSupportedNpadIdTypeEPKjj(v, a2, a3);
}

/* ============================================================================
 * nn_hid_SetSupportedNpadStyleSet
 * RVA 0x009AE5F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE5F4  RVA 0x609AE5F4  size 0xC */
int nn_hid_SetSupportedNpadStyleSet()
{
  return __imp__ZN2nn3hid24SetSupportedNpadStyleSetENS_4util10BitFlagSetILi32ENS0_12NpadStyleTagEEE();
}

/* ============================================================================
 * nn_hid_GetNpadStyleSet
 * RVA 0x009AE600   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE600  RVA 0x609AE600  size 0xC */
int __fastcall nn_hid_GetNpadStyleSet(nn_hid *v, const unsigned int *a2)
{
  return __imp__ZN2nn3hid15GetNpadStyleSetERKj(v, a2);
}

/* ============================================================================
 * nn_hid_GetNpadStates
 * RVA 0x009AE60C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE60C  RVA 0x609AE60C  size 0xC */
int nn_hid_GetNpadStates()
{
  return __imp__ZN2nn3hid13GetNpadStatesEPNS0_17NpadHandheldStateEiRKj();
}

/* ============================================================================
 * nn_hid_GetNpadStates
 * RVA 0x009AE618   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE618  RVA 0x609AE618  size 0xC */
int nn_hid_GetNpadStates()
{
  return __imp__ZN2nn3hid13GetNpadStatesEPNS0_16NpadJoyDualStateEiRKj();
}

/* ============================================================================
 * nn_hid_GetNpadStates
 * RVA 0x009AE624   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE624  RVA 0x609AE624  size 0xC */
int nn_hid_GetNpadStates()
{
  return __imp__ZN2nn3hid13GetNpadStatesEPNS0_16NpadFullKeyStateEiRKj();
}

/* ============================================================================
 * nn_hid_GetNpadStates
 * RVA 0x009AE630   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE630  RVA 0x609AE630  size 0xC */
int nn_hid_GetNpadStates()
{
  return __imp__ZN2nn3hid13GetNpadStatesEPNS0_16NpadJoyLeftStateEiRKj();
}

/* ============================================================================
 * nn_hid_GetNpadStates
 * RVA 0x009AE63C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE63C  RVA 0x609AE63C  size 0xC */
int nn_hid_GetNpadStates()
{
  return __imp__ZN2nn3hid13GetNpadStatesEPNS0_17NpadJoyRightStateEiRKj();
}

/* ============================================================================
 * nn_hid_GetSixAxisSensorHandles
 * RVA 0x009AE648   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE648  RVA 0x609AE648  size 0xC */
int nn_hid_GetSixAxisSensorHandles()
{
  return __imp__ZN2nn3hid23GetSixAxisSensorHandlesEPNS0_19SixAxisSensorHandleEiRKjNS_4util10BitFlagSetILi32ENS0_12NpadStyleTagEEE();
}

/* ============================================================================
 * nn_hid_GetVibrationDeviceHandles
 * RVA 0x009AE654   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE654  RVA 0x609AE654  size 0xC */
int nn_hid_GetVibrationDeviceHandles()
{
  return __imp__ZN2nn3hid25GetVibrationDeviceHandlesEPNS0_21VibrationDeviceHandleEiRKjNS_4util10BitFlagSetILi32ENS0_12NpadStyleTagEEE();
}

/* ============================================================================
 * nn_hid_StartSixAxisSensor
 * RVA 0x009AE660   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE660  RVA 0x609AE660  size 0xC */
int nn_hid_StartSixAxisSensor()
{
  return __imp__ZN2nn3hid18StartSixAxisSensorERKNS0_19SixAxisSensorHandleE();
}

/* ============================================================================
 * nn_hid_InitializeVibrationDevice
 * RVA 0x009AE66C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE66C  RVA 0x609AE66C  size 0xC */
int nn_hid_InitializeVibrationDevice()
{
  return __imp__ZN2nn3hid25InitializeVibrationDeviceERKNS0_21VibrationDeviceHandleE();
}

/* ============================================================================
 * nn_hid_GetSixAxisSensorStates
 * RVA 0x009AE678   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE678  RVA 0x609AE678  size 0xC */
int nn_hid_GetSixAxisSensorStates()
{
  return __imp__ZN2nn3hid22GetSixAxisSensorStatesEPNS0_18SixAxisSensorStateEiRKNS0_19SixAxisSensorHandleE();
}

/* ============================================================================
 * nn_hid_SetNpadJoyHoldType
 * RVA 0x009AE684   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE684  RVA 0x609AE684  size 0xC */
int nn_hid_SetNpadJoyHoldType()
{
  return __imp__ZN2nn3hid18SetNpadJoyHoldTypeENS0_15NpadJoyHoldTypeE();
}

/* ============================================================================
 * nn_hid_SendVibrationValue
 * RVA 0x009AE690   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE690  RVA 0x609AE690  size 0xC */
int nn_hid_SendVibrationValue()
{
  return __imp__ZN2nn3hid18SendVibrationValueERKNS0_21VibrationDeviceHandleERKNS0_14VibrationValueE();
}

/* ============================================================================
 * nn_fs_GetEntryType
 * RVA 0x009AE69C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE69C  RVA 0x609AE69C  size 0xC */
int nn_fs_GetEntryType()
{
  return __imp__ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc();
}

/* ============================================================================
 * nn_fs_CreateFile
 * RVA 0x009AE6A8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6A8  RVA 0x609AE6A8  size 0xC */
int __fastcall nn_fs_CreateFile(nn_fs *v, const char *a2, __int64 a3)
{
  return __imp__ZN2nn2fs10CreateFileEPKcx(v, a2, a3);
}

/* ============================================================================
 * nn_fs_SetFileSize
 * RVA 0x009AE6B4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6B4  RVA 0x609AE6B4  size 0xC */
int nn_fs_SetFileSize()
{
  return __imp__ZN2nn2fs11SetFileSizeENS0_10FileHandleEx();
}

/* ============================================================================
 * nn_fs_DeleteFile
 * RVA 0x009AE6C0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6C0  RVA 0x609AE6C0  size 0xC */
int __fastcall nn_fs_DeleteFile(nn_fs *v, const char *a2)
{
  return __imp__ZN2nn2fs10DeleteFileEPKc(v, a2);
}

/* ============================================================================
 * nn_fs_ReadFile
 * RVA 0x009AE6CC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6CC  RVA 0x609AE6CC  size 0xC */
int nn_fs_ReadFile()
{
  return __imp__ZN2nn2fs8ReadFileEPjNS0_10FileHandleExPvjRKNS0_10ReadOptionE();
}

/* ============================================================================
 * nn_fs_OpenDirectory
 * RVA 0x009AE6D8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6D8  RVA 0x609AE6D8  size 0xC */
int nn_fs_OpenDirectory()
{
  return __imp__ZN2nn2fs13OpenDirectoryEPNS0_15DirectoryHandleEPKci();
}

/* ============================================================================
 * nn_fs_CloseDirectory
 * RVA 0x009AE6E4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6E4  RVA 0x609AE6E4  size 0xC */
int nn_fs_CloseDirectory()
{
  return __imp__ZN2nn2fs14CloseDirectoryENS0_15DirectoryHandleE();
}

/* ============================================================================
 * nn_fs_ReadDirectory
 * RVA 0x009AE6F0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6F0  RVA 0x609AE6F0  size 0xC */
int nn_fs_ReadDirectory()
{
  return __imp__ZN2nn2fs13ReadDirectoryEPxPNS0_14DirectoryEntryENS0_15DirectoryHandleEx();
}

/* ============================================================================
 * nn_fs_CreateDirectory
 * RVA 0x009AE6FC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE6FC  RVA 0x609AE6FC  size 0xC */
int __fastcall nn_fs_CreateDirectory(nn_fs *v, const char *a2)
{
  return __imp__ZN2nn2fs15CreateDirectoryEPKc(v, a2);
}

/* ============================================================================
 * nn_fs_CommitSaveData
 * RVA 0x009AE708   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE708  RVA 0x609AE708  size 0xC */
int __fastcall nn_fs_CommitSaveData(nn_fs *v, const char *a2)
{
  return __imp__ZN2nn2fs14CommitSaveDataEPKc(v, a2);
}

/* ============================================================================
 * nn_fs_QueryMountRomCacheSize
 * RVA 0x009AE714   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE714  RVA 0x609AE714  size 0xC */
int __fastcall nn_fs_QueryMountRomCacheSize(nn_fs *v, unsigned int *a2)
{
  return __imp__ZN2nn2fs22QueryMountRomCacheSizeEPj(v, a2);
}

/* ============================================================================
 * nn_fs_MountRom
 * RVA 0x009AE720   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE720  RVA 0x609AE720  size 0xC */
int __fastcall nn_fs_MountRom(nn_fs *v, const char *a2, void *a3, unsigned int a4)
{
  return __imp__ZN2nn2fs8MountRomEPKcPvj(v, a2, a3, a4);
}

/* ============================================================================
 * nv_SetGraphicsAllocator
 * RVA 0x009AE72C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE72C  RVA 0x609AE72C  size 0xC */
int __fastcall nv_SetGraphicsAllocator(
        nv *v,
        void *(__fastcall *a2)(unsigned int, unsigned int, void *),
        void (__fastcall *a3)(void *, void *),
        void *(__fastcall *a4)(void *, unsigned int, void *),
        void *a5)
{
  return __imp__ZN2nv20SetGraphicsAllocatorEPFPvjjS0_EPFvS0_S0_EPFS0_S0_jS0_ES0_(v, a2, a3, a4, a5);
}

/* ============================================================================
 * nv_InitializeGraphics
 * RVA 0x009AE738   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE738  RVA 0x609AE738  size 0xC */
int __fastcall nv_InitializeGraphics(nv *v, void *a2, unsigned int a3)
{
  return __imp__ZN2nv18InitializeGraphicsEPvj(v, a2, a3);
}

/* ============================================================================
 * nn_mem_StandardAllocator_StandardAllocator
 * RVA 0x009AE744   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE744  RVA 0x609AE744  size 0xC */
int __fastcall nn_mem_StandardAllocator_StandardAllocator(
        nn_mem_StandardAllocator *v,
        void *a2,
        unsigned int a3)
{
  return __imp__ZN2nn3mem17StandardAllocatorC1EPvj(v, a2, a3);
}

/* ============================================================================
 * nv_SetGraphicsDevtoolsAllocator
 * RVA 0x009AE750   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE750  RVA 0x609AE750  size 0xC */
int __fastcall nv_SetGraphicsDevtoolsAllocator(
        nv *v,
        void *(__fastcall *a2)(unsigned int, unsigned int, void *),
        void (__fastcall *a3)(void *, void *),
        void *(__fastcall *a4)(void *, unsigned int, void *),
        void *a5)
{
  return __imp__ZN2nv28SetGraphicsDevtoolsAllocatorEPFPvjjS0_EPFvS0_S0_EPFS0_S0_jS0_ES0_(v, a2, a3, a4, a5);
}

/* ============================================================================
 * nn_vi_Initialize
 * RVA 0x009AE75C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE75C  RVA 0x609AE75C  size 0xC */
int __fastcall nn_vi_Initialize(nn_vi *v)
{
  return __imp__ZN2nn2vi10InitializeEv(v);
}

/* ============================================================================
 * nn_vi_OpenDefaultDisplay
 * RVA 0x009AE768   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE768  RVA 0x609AE768  size 0xC */
int __fastcall nn_vi_OpenDefaultDisplay(nn_vi *v, Display **a2)
{
  return __imp__ZN2nn2vi18OpenDefaultDisplayEPPNS0_7DisplayE(v, a2);
}

/* ============================================================================
 * nn_vi_CreateLayer
 * RVA 0x009AE774   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE774  RVA 0x609AE774  size 0xC */
int nn_vi_CreateLayer()
{
  return __imp__ZN2nn2vi11CreateLayerEPPNS0_5LayerEPNS0_7DisplayE();
}

/* ============================================================================
 * nn_vi_SetLayerScalingMode
 * RVA 0x009AE780   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE780  RVA 0x609AE780  size 0xC */
int nn_vi_SetLayerScalingMode()
{
  return __imp__ZN2nn2vi19SetLayerScalingModeEPNS0_5LayerENS0_11ScalingModeE();
}

/* ============================================================================
 * nn_vi_GetDisplayVsyncEvent
 * RVA 0x009AE78C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE78C  RVA 0x609AE78C  size 0xC */
int nn_vi_GetDisplayVsyncEvent()
{
  return __imp__ZN2nn2vi20GetDisplayVsyncEventEPNS_2os15SystemEventTypeEPNS0_7DisplayE();
}

/* ============================================================================
 * nvnBootstrapLoader
 * RVA 0x009AE798   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE798  RVA 0x609AE798  size 0xC */
int nvnBootstrapLoader()
{
  return __imp_nvnBootstrapLoader();
}

/* ============================================================================
 * nn_vi_GetNativeWindow
 * RVA 0x009AE7A4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7A4  RVA 0x609AE7A4  size 0xC */
int __fastcall nn_vi_GetNativeWindow(int a1, int a2)
{
  return __imp__ZN2nn2vi15GetNativeWindowEPPvPNS0_5LayerE(a1, a2);
}

/* ============================================================================
 * nn_oe_GetDesiredLanguage
 * RVA 0x009AE7B0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7B0  RVA 0x609AE7B0  size 0xC */
int __fastcall nn_oe_GetDesiredLanguage(nn_oe *v)
{
  return __imp__ZN2nn2oe18GetDesiredLanguageEv(v);
}

/* ============================================================================
 * nn_settings_LanguageCode_Make
 * RVA 0x009AE7BC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7BC  RVA 0x609AE7BC  size 0xC */
int nn_settings_LanguageCode_Make()
{
  return __imp__ZN2nn8settings12LanguageCode4MakeENS0_8LanguageE();
}

/* ============================================================================
 * tolower
 * RVA 0x009AE7D4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7D4  RVA 0x609AE7D4  size 0xC */
int tolower(int c)
{
  return __imp_tolower(c);
}

/* ============================================================================
 * nn_util_VSNPrintf
 * RVA 0x009AE7E0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7E0  RVA 0x609AE7E0  size 0xC */
int __fastcall nn_util_VSNPrintf(char *s, size_t n, const char *format, va_list arg)
{
  return __imp__ZN2nn4util9VSNPrintfEPcjPKcSt9__va_list(s, n, format, arg);
}

/* ============================================================================
 * sscanf
 * RVA 0x009AE7EC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7EC  RVA 0x609AE7EC  size 0xC */
int sscanf(const char *s, const char *format, ...)
{
  return __imp_sscanf(s, format);
}

/* ============================================================================
 * nn_os_TryLockMutex
 * RVA 0x009AE7F8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE7F8  RVA 0x609AE7F8  size 0xC */
int nn_os_TryLockMutex()
{
  return __imp__ZN2nn2os12TryLockMutexEPNS0_9MutexTypeE();
}

/* ============================================================================
 * nn_os_InitializeLightEvent
 * RVA 0x009AE804   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE804  RVA 0x609AE804  size 0xC */
int nn_os_InitializeLightEvent()
{
  return __imp__ZN2nn2os20InitializeLightEventEPNS0_14LightEventTypeEbNS0_14EventClearModeE();
}

/* ============================================================================
 * nn_os_FinalizeLightEvent
 * RVA 0x009AE810   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE810  RVA 0x609AE810  size 0xC */
int nn_os_FinalizeLightEvent()
{
  return __imp__ZN2nn2os18FinalizeLightEventEPNS0_14LightEventTypeE();
}

/* ============================================================================
 * nn_os_WaitLightEvent
 * RVA 0x009AE81C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE81C  RVA 0x609AE81C  size 0xC */
int nn_os_WaitLightEvent()
{
  return __imp__ZN2nn2os14WaitLightEventEPNS0_14LightEventTypeE();
}

/* ============================================================================
 * nn_os_SignalLightEvent
 * RVA 0x009AE828   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE828  RVA 0x609AE828  size 0xC */
int nn_os_SignalLightEvent()
{
  return __imp__ZN2nn2os16SignalLightEventEPNS0_14LightEventTypeE();
}

/* ============================================================================
 * nn_os_ClearLightEvent
 * RVA 0x009AE834   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE834  RVA 0x609AE834  size 0xC */
int nn_os_ClearLightEvent()
{
  return __imp__ZN2nn2os15ClearLightEventEPNS0_14LightEventTypeE();
}

/* ============================================================================
 * nn_os_CreateThread
 * RVA 0x009AE840   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE840  RVA 0x609AE840  size 0xC */
int nn_os_CreateThread()
{
  return __imp__ZN2nn2os12CreateThreadEPNS0_10ThreadTypeEPFvPvES3_S3_ji();
}

/* ============================================================================
 * nn_os_SetThreadName
 * RVA 0x009AE84C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE84C  RVA 0x609AE84C  size 0xC */
int nn_os_SetThreadName()
{
  return __imp__ZN2nn2os13SetThreadNameEPNS0_10ThreadTypeEPKc();
}

/* ============================================================================
 * nn_os_SetTlsValue
 * RVA 0x009AE858   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE858  RVA 0x609AE858  size 0xC */
int nn_os_SetTlsValue()
{
  return __imp__ZN2nn2os11SetTlsValueENS0_7TlsSlotEj();
}

/* ============================================================================
 * nn_os_GetThreadId
 * RVA 0x009AE864   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE864  RVA 0x609AE864  size 0xC */
int nn_os_GetThreadId()
{
  return __imp__ZN2nn2os11GetThreadIdEPKNS0_10ThreadTypeE();
}

/* ============================================================================
 * nn_os_GetThreadPriority
 * RVA 0x009AE870   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE870  RVA 0x609AE870  size 0xC */
int nn_os_GetThreadPriority()
{
  return __imp__ZN2nn2os17GetThreadPriorityEPKNS0_10ThreadTypeE();
}

/* ============================================================================
 * nn_os_GetCurrentStackInfo
 * RVA 0x009AE87C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE87C  RVA 0x609AE87C  size 0xC */
int __fastcall nn_os_GetCurrentStackInfo(nn_os *v, unsigned int *a2, unsigned int *a3)
{
  return __imp__ZN2nn2os19GetCurrentStackInfoEPjS1_(v, a2, a3);
}

/* ============================================================================
 * nn_os_GetThreadAvailableCoreMask
 * RVA 0x009AE888   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE888  RVA 0x609AE888  size 0xC */
int __fastcall nn_os_GetThreadAvailableCoreMask(nn_os *v)
{
  return __imp__ZN2nn2os26GetThreadAvailableCoreMaskEv(v);
}

/* ============================================================================
 * nn_os_YieldThread
 * RVA 0x009AE894   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE894  RVA 0x609AE894  size 0xC */
int __fastcall nn_os_YieldThread(nn_os *v)
{
  return __imp__ZN2nn2os11YieldThreadEv(v);
}

/* ============================================================================
 * nn_os_ChangeThreadPriority
 * RVA 0x009AE8A0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8A0  RVA 0x609AE8A0  size 0xC */
int nn_os_ChangeThreadPriority()
{
  return __imp__ZN2nn2os20ChangeThreadPriorityEPNS0_10ThreadTypeEi();
}

/* ============================================================================
 * nn_os_GetCurrentThread
 * RVA 0x009AE8AC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8AC  RVA 0x609AE8AC  size 0xC */
int __fastcall nn_os_GetCurrentThread(nn_os *v)
{
  return __imp__ZN2nn2os16GetCurrentThreadEv(v);
}

/* ============================================================================
 * nn_os_AllocateTlsSlot
 * RVA 0x009AE8B8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8B8  RVA 0x609AE8B8  size 0xC */
int nn_os_AllocateTlsSlot()
{
  return __imp__ZN2nn2os15AllocateTlsSlotEPNS0_7TlsSlotEPFvjE();
}

/* ============================================================================
 * nn_os_FreeTlsSlot
 * RVA 0x009AE8C4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8C4  RVA 0x609AE8C4  size 0xC */
int nn_os_FreeTlsSlot()
{
  return __imp__ZN2nn2os11FreeTlsSlotENS0_7TlsSlotE();
}

/* ============================================================================
 * nn_time_IsInitialized
 * RVA 0x009AE8D0   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8D0  RVA 0x609AE8D0  size 0xC */
int __fastcall nn_time_IsInitialized(nn_time *v)
{
  return __imp__ZN2nn4time13IsInitializedEv(v);
}

/* ============================================================================
 * nn_time_Initialize
 * RVA 0x009AE8DC   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8DC  RVA 0x609AE8DC  size 0xC */
int __fastcall nn_time_Initialize(nn_time *v)
{
  return __imp__ZN2nn4time10InitializeEv(v);
}

/* ============================================================================
 * nn_time_StandardUserSystemClock_GetCurrentTime
 * RVA 0x009AE8E8   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8E8  RVA 0x609AE8E8  size 0xC */
int nn_time_StandardUserSystemClock_GetCurrentTime()
{
  return __imp__ZN2nn4time23StandardUserSystemClock14GetCurrentTimeEPNS0_9PosixTimeE();
}

/* ============================================================================
 * nn_time_ToCalendarTime
 * RVA 0x009AE8F4   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE8F4  RVA 0x609AE8F4  size 0xC */
int nn_time_ToCalendarTime()
{
  return __imp__ZN2nn4time14ToCalendarTimeEPNS0_12CalendarTimeEPNS0_22CalendarAdditionalInfoERKNS0_9PosixTimeE();
}

/* ============================================================================
 * nn_os_GetSystemTickFrequency
 * RVA 0x009AE900   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE900  RVA 0x609AE900  size 0xC */
int __fastcall nn_os_GetSystemTickFrequency(nn_os *v)
{
  return __imp__ZN2nn2os22GetSystemTickFrequencyEv(v);
}

/* ============================================================================
 * nn_os_TryJamMessageQueue
 * RVA 0x009AE90C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE90C  RVA 0x609AE90C  size 0xC */
int nn_os_TryJamMessageQueue()
{
  return __imp__ZN2nn2os18TryJamMessageQueueEPNS0_16MessageQueueTypeEj();
}

/* ============================================================================
 * asinf
 * RVA 0x009AE918   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE918  RVA 0x609AE918  size 0xC */
float asinf(float x)
{
  return __imp_asinf(x);
}

/* ============================================================================
 * exp2f
 * RVA 0x009AE924   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE924  RVA 0x609AE924  size 0xC */
int exp2f()
{
  return __imp_exp2f();
}

/* ============================================================================
 * logf
 * RVA 0x009AE930   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE930  RVA 0x609AE930  size 0xC */
float logf(float x)
{
  return __imp_logf(x);
}

/* ============================================================================
 * expf
 * RVA 0x009AE93C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE93C  RVA 0x609AE93C  size 0xC */
float expf(float x)
{
  return __imp_expf(x);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_CheckGlyphExist
 * RVA 0x009AE948   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE948  RVA 0x609AE948  size 0xC */
int __fastcall nn_fontll_ScalableFontEngine_CheckGlyphExist(nn_fontll_ScalableFontEngine *v, unsigned int a2)
{
  return __imp__ZN2nn6fontll18ScalableFontEngine15CheckGlyphExistEj(v, a2);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_SetFont
 * RVA 0x009AE954   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE954  RVA 0x609AE954  size 0xC */
int __fastcall nn_fontll_ScalableFontEngine_SetFont(nn_fontll_ScalableFontEngine *v, char *a2)
{
  return __imp__ZN2nn6fontll18ScalableFontEngine7SetFontEPc(v, a2);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_GetError
 * RVA 0x009AE960   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE960  RVA 0x609AE960  size 0xC */
int __fastcall nn_fontll_ScalableFontEngine_GetError(nn_fontll_ScalableFontEngine *v)
{
  return __imp__ZN2nn6fontll18ScalableFontEngine8GetErrorEv(v);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_SetBoldWeight
 * RVA 0x009AE96C   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE96C  RVA 0x609AE96C  size 0xC */
int __fastcall nn_fontll_ScalableFontEngine_SetBoldWeight(nn_fontll_ScalableFontEngine *v, int a2)
{
  return __imp__ZN2nn6fontll18ScalableFontEngine13SetBoldWeightEi(v, a2);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_SetOutlineWidth
 * RVA 0x009AE978   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE978  RVA 0x609AE978  size 0xC */
int __fastcall nn_fontll_ScalableFontEngine_SetOutlineWidth(
        nn_fontll_ScalableFontEngine *v,
        unsigned __int16 a2)
{
  return __imp__ZN2nn6fontll18ScalableFontEngine15SetOutlineWidthEt(v, a2);
}

/* ============================================================================
 * nn_fontll_ScalableFontEngine_SetFlags
 * RVA 0x009AE984   size 0xC   xrefs 0   recovered from main.i64
 * ============================================================================ */
/* Recovered from main.idb: VA 0x609AE984  RVA 0x609AE984  size 0xC */
int nn_fontll_ScalableFontEngine_SetFlags()
{
  return __imp__ZN2nn6fontll18ScalableFontEngine8SetFlagsENS1_5FlagsE();
}
