/* sub_6094CD80
 * address: 0x6094CD80   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094CD80(int a1, _DWORD *a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r10
  float *v8; // r4
  unsigned int v9; // r7
  float v10; // s18
  float v11; // s24
  float v12; // s0
  _DWORD *v13; // r10
  _DWORD v15[23]; // [sp+4h] [bp-5Ch] BYREF

  if ( *a2 )
    v6 = dword_60CC73E8(*a2);
  else
    v6 = 0;
  v7 = v6 + a2[1];
  if ( a3 )
  {
    v8 = (float *)(v7 + 28);
    v9 = 0;
    v10 = (float)a3;
    do
    {
      v11 = cosf((float)((float)v9 * 6.2832) / v10) * 0.5;
      v12 = sinf((float)((float)v9 * 6.2832) / v10) * 0.5;
      *(v8 - 7) = v11;
      ++v9;
      *(v8 - 6) = v12;
      *(v8 - 5) = 0.0;
      *(v8 - 1) = v11 + 0.5;
      *v8 = 0.5 - v12;
      *(v8 - 4) = 0.0;
      *(v8 - 3) = 0.0;
      *(v8 - 2) = 1.0;
      v8 += 8;
    }
    while ( a3 != v9 );
  }
  *(_DWORD *)(v7 + 32 * a3) = 0;
  v13 = (_DWORD *)(v7 + 32 * a3);
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 1065353216;
  v13[6] = 1056964608;
  v13[7] = 1056964608;
  v15[0] = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  sub_609225B8(a1, v15, 0x20u, 32 * a3 + 32);
  sub_60922768(a1, 0, 34, 0, 0);
  sub_60922768(a1, 1u, 34, 12, 0);
  return sub_60922768(a1, 2u, 22, 24, 0);
}
