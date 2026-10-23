/* sub_60669D44
 * address: 0x60669D44   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60669D44(int a1)
{
  int *v2; // r6
  int v3; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  unsigned int v6; // r4
  float *v7; // r7
  float v8; // s4
  float v9; // s0
  unsigned int v10; // r0
  float v12[18]; // [sp+0h] [bp-48h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = (int *)(a1 + 6224);
  if ( FIELD_S32(a1, 6224) >= 1 )
  {
    v3 = 0;
    v4 = (_DWORD *)(a1 + 6160);
    v5 = (_DWORD *)(a1 + 6240);
    do
    {
      v5[43] = *(v4 - 1);
      v5[44] = *v4;
      (*(void (__fastcall **)(_DWORD *))(*v5 + 28))(v5);
      ++v3;
      v4 += 2;
      v5 += 112;
    }
    while ( v3 < *v2 );
  }
  sub_6066971C(a1);
  if ( *v2 >= 1 )
  {
    v6 = 0;
    v7 = (float *)(a1 + 6160);
    do
    {
      v8 = FIELD_F32(a1, 112);
      v9 = FIELD_F32(a1, 6208) * 16.0;
      v12[0] = (float)(*(v7 - 1) + FIELD_F32(a1, 108)) + (float)(v9 * -0.5);
      v12[1] = *v7 + v8;
      v12[2] = FIELD_F32(a1, 6212);
      v10 = 0;
      if ( v6 < 6 )
        v10 = v6;
      sub_60645448(a1 + (v10 << 8) + 8928, (int)v12, v9);
      ++v6;
      v7 += 2;
    }
    while ( (int)v6 < *v2 );
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
