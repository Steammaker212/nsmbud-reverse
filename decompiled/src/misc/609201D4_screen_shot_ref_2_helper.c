/* screen_shot_ref_2_helper
 * address: 0x609201D4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall screen_shot_ref_2_helper(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned int v7; // r1
  int v8; // r4
  unsigned int v9; // r6
  int v10; // lr
  unsigned int v11; // r0
  int v12; // r2
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r2
  int v16; // r0
  _BYTE v19[40]; // [sp+18h] [bp-A8h] BYREF
  _BYTE v20[44]; // [sp+40h] [bp-80h] BYREF
  _DWORD v21[6]; // [sp+6Ch] [bp-54h] BYREF
  _DWORD v22[15]; // [sp+84h] [bp-3Ch] BYREF

  v7 = a1[12];
  v8 = a1[17];
  v9 = a1[13];
  v10 = a3[17];
  v11 = a3[12];
  v12 = 1;
  if ( (int)(v7 >> a5) > 1 )
    v12 = v7 >> a5;
  v13 = a3[13];
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = a4;
  v21[0] = 0;
  v21[1] = 0;
  v21[2] = a4;
  v22[3] = v12;
  v14 = 1;
  if ( v8 == 3 )
    v14 = v9;
  if ( v14 <= (int)(v9 >> a5) )
    v14 = v9 >> a5;
  v22[4] = v14;
  v22[5] = 1;
  v15 = 1;
  if ( (int)(v11 >> a5) > 1 )
    v15 = v11 >> a5;
  v16 = 1;
  if ( v10 == 3 )
    v16 = v13;
  v21[3] = v15;
  if ( v16 <= (int)(v13 >> a5) )
    v16 = v13 >> a5;
  v21[4] = v16;
  v21[5] = 1;
  dword_60CC7528(v20);
  dword_60CC752C(v20, a5, 1);
  dword_60CC7528(v19);
  dword_60CC752C(v19, a5, 1);
  return dword_60CC7924(FIELD_U32(a2, 192), a1 + 32, v20, v22, a3 + 32, v19, v21, 0);
}
