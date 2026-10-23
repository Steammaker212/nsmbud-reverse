/* sub_6065F464
 * address: 0x6065F464   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065F464(int a1)
{
  float v2; // s4
  void (__fastcall ***v3)(_DWORD, _DWORD, float *, int *, int *); // r0
  int v4; // r1
  void (__fastcall *v5)(_DWORD, _DWORD, float *, int *, int *); // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  float v9; // s0
  float v11; // [sp+8h] [bp-28h] BYREF
  int v12; // [sp+Ch] [bp-24h]
  int v13; // [sp+10h] [bp-20h]
  int v14; // [sp+14h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 7056);
  FIELD_F32(a1, 7004) = (float)(FIELD_F32(a1, 112) + -40.0) - (float)(v2 * 0.5);
  FIELD_F32(a1, 7016) = v2 * 0.03125;
  v3 = (void (__fastcall ***)(_DWORD, _DWORD, float *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(
                                                                       **(_DWORD **)(a1 + 6104),
                                                                       0);
  v4 = FIELD_U32(a1, 7016);
  v11 = 1.0;
  v12 = v4;
  v5 = **v3;
  v14 = 0;
  v5(v3, 0, &v11, &v14, &dword_60B3B944);
  sub_6065F29C((ModelWrapper **)a1);
  FIELD_U32(a1, 6652) = FIELD_U32(a1, 164);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6408));
  v6 = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6316) = v6;
  v7 = FIELD_U32(a1, 112);
  v8 = FIELD_U32(a1, 116);
  v11 = FIELD_F32(a1, 108);
  v12 = v7;
  v13 = v8;
  v9 = FIELD_F32(a1, 7064);
  v11 = v11 - (float)(v9 * 0.5);
  sub_60645448(a1 + 6112, (int)&v11, v9);
  StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
