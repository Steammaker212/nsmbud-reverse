/* sub_6060CB44
 * address: 0x6060CB44   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060CB44(int a1)
{
  float v2; // s0
  float v3; // s2
  void (__fastcall ***v4)(_DWORD, _DWORD, _DWORD *, int *, int *); // r0
  int v5; // r1
  void (__fastcall *v6)(_DWORD, _DWORD, _DWORD *, int *, int *); // r5
  int v7; // r0
  int *v8; // r1
  float v9; // s0
  float v10; // s2
  ColliderBase *v11; // r4
  unsigned int v12; // t1
  int v13; // r3
  float v14; // s0
  int v15; // r3
  int v16; // r1
  _DWORD v18[2]; // [sp+4h] [bp-2Ch] BYREF
  int v19; // [sp+Ch] [bp-24h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 6600);
  FIELD_U32(a1, 6576) = FIELD_U32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  FIELD_U32(a1, 6584) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 6580) = (float)(v3 + -8.0) - (float)(v2 * 0.5);
  FIELD_F32(a1, 6592) = v2 * 0.03125;
  v4 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(
                                                                        **(_DWORD **)(a1 + 6104),
                                                                        0);
  v5 = FIELD_U32(a1, 6592);
  v18[0] = 1065353216;
  v18[1] = v5;
  v6 = **v4;
  v19 = 0;
  v6(v4, 0, v18, &v19, &dword_60B3B944);
  sub_6060C7C8(a1);
  v8 = (int *)(a1 + 6472);
  v7 = FIELD_U32(a1, 6472);
  v9 = (float)((float)(FIELD_F32(a1, 6628) + FIELD_F32(a1, 6628)) + 32.0) + -16.0;
  v10 = v9 * 0.5;
  *(float *)v7 = -8.0 - (float)(v9 * 0.5);
  FIELD_U32(v7, 4) = -1056964608;
  v12 = FIELD_U32(a1, 6468);
  v11 = (ColliderBase *)(a1 + 6468);
  v13 = *v8;
  v14 = v9 * -0.5;
  if ( v12 > 1 )
    v13 += 8;
  *(float *)v13 = v14;
  FIELD_U32(v13, 4) = 0;
  v15 = *v8;
  if ( FIELD_U32(v11, 0x0) > 2u )
    v15 += 16;
  *(float *)v15 = v10;
  FIELD_U32(v15, 4) = 0;
  v16 = *v8;
  if ( FIELD_U32(v11, 0x0) > 3u )
    v16 += 24;
  *(float *)v16 = v10 + 8.0;
  FIELD_U32(v16, 4) = -1056964608;
  SolidOnTopCollider_execute(v11 - 1);
  return 1;
}
