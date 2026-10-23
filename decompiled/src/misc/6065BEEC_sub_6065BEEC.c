/* sub_6065BEEC
 * address: 0x6065BEEC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065BEEC(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // t1
  float v5; // s0
  float v6; // s2
  float v7; // s12
  float v8; // s0
  void (__fastcall ***v9)(_DWORD, _DWORD, int *, _DWORD *, int *); // r0
  int v10; // r2
  void (__fastcall *v11)(_DWORD, _DWORD, int *, _DWORD *, int *); // r5
  void (__fastcall ***v12)(_DWORD, _DWORD, int *, _DWORD *, int *); // r0
  int v13; // r2
  void (__fastcall *v14)(_DWORD, _DWORD, int *, _DWORD *, int *); // r5
  int v16; // [sp+4h] [bp-24h] BYREF
  int v17; // [sp+8h] [bp-20h]
  _DWORD v18[7]; // [sp+Ch] [bp-1Ch] BYREF

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    v4 = FIELD_U32(a1, 6164);
    v3 = a1 + 6164;
    *(_DWORD *)v3 = v4 + ((int)(float)(*(float *)(v3 - 24) * 2607.6) << 16);
    v5 = *(float *)(v3 - 28);
    v6 = *(float *)(v3 - 6052);
    v7 = v5 + 4.0;
    FIELD_F32(v3, 44) = v6 - (float)(v5 * 0.5);
    v8 = *(float *)(v3 - 32) - v5;
    FIELD_F32(v3, 56) = v6 - (float)(v8 * 0.5);
    FIELD_F32(v3, 80) = (float)(v7 * 0.125) * 0.5;
    FIELD_F32(v3, 92) = (float)((float)(v8 + 4.0) * 0.125) * 0.5;
    v9 = (void (__fastcall ***)(_DWORD, _DWORD, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 28) + 132))(
                                                                          **(_DWORD **)(v3 + 28),
                                                                          0);
    v10 = FIELD_U32(v3, 80);
    v16 = FIELD_U32(v3, 76);
    v17 = v10;
    v11 = **v9;
    v18[0] = 0;
    v11(v9, 0, &v16, v18, &dword_60B3B944);
    v12 = (void (__fastcall ***)(_DWORD, _DWORD, int *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 32) + 132))(
                                                                           **(_DWORD **)(v3 + 32),
                                                                           0);
    v13 = FIELD_U32(v3, 92);
    v16 = FIELD_U32(v3, 88);
    v17 = v13;
    v14 = **v12;
    v18[0] = 0;
    v14(v12, 0, &v16, v18, &dword_60B3B944);
  }
  return 1;
}
