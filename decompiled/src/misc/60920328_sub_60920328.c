/* sub_60920328
 * address: 0x60920328   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920328(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v9; // r0
  int v10; // r12
  unsigned int v11; // r2
  unsigned int v12; // r6
  int v13; // r1
  unsigned int v14; // r7
  int v15; // r4
  bool v16; // zf
  int v17; // r1
  int v18; // r1
  int v19; // r1
  _BYTE v22[40]; // [sp+18h] [bp-A8h] BYREF
  _BYTE v23[44]; // [sp+40h] [bp-80h] BYREF
  _DWORD v24[6]; // [sp+6Ch] [bp-54h] BYREF
  _DWORD v25[15]; // [sp+84h] [bp-3Ch] BYREF

  v9 = a3[13];
  v10 = a3[17];
  v11 = a3[12];
  v12 = a1[13];
  v13 = a1[17];
  v14 = a1[12];
  v25[0] = 0;
  v25[1] = 0;
  v25[2] = a6;
  v15 = 1;
  if ( (int)(v14 >> a7) > 1 )
    v15 = v14 >> a7;
  v16 = v13 == 3;
  v17 = 1;
  if ( v16 )
    v17 = v12;
  v25[3] = v15;
  if ( v17 <= (int)(v12 >> a7) )
    v17 = v12 >> a7;
  v25[4] = v17;
  v25[5] = 1;
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = a4;
  v18 = 1;
  if ( (int)(v11 >> a5) > 1 )
    v18 = v11 >> a5;
  v24[3] = v18;
  v19 = 1;
  if ( v10 == 3 )
    v19 = v9;
  if ( v19 <= (int)(v9 >> a5) )
    v19 = v9 >> a5;
  v24[4] = v19;
  v24[5] = 1;
  dword_60CC7528(v23);
  dword_60CC752C(v23, a7, 1);
  dword_60CC7528(v22);
  dword_60CC752C(v22, a5, 1);
  return dword_60CC7924(FIELD_U32(a2, 192), a1 + 32, v23, v25, a3 + 32, v22, v24, 0);
}
