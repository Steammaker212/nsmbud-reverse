/* sub_60449E68
 * address: 0x60449E68   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60449E68(
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
        int a13)
{
  int v17; // r2
  int v18; // r3
  unsigned int i; // r7
  _DWORD *v20; // r5
  _DWORD *v21; // r5
  _DWORD *v22; // r5
  _DWORD *v23; // r5
  __int16 v25; // [sp+10h] [bp-88h] BYREF
  int v26; // [sp+14h] [bp-84h]
  int v27; // [sp+28h] [bp-70h]
  char v28; // [sp+39h] [bp-5Fh]
  char v29; // [sp+3Bh] [bp-5Dh]
  __int16 v30; // [sp+68h] [bp-30h]
  char v31; // [sp+6Ah] [bp-2Eh]

  sub_60450C78(dword_60C9CEF0, a12, a13, 5);
  sub_60450CBC(dword_60C9CEF0, 7, 7, 7, 1, 2, 5);
  FIELD_U32(a1, 56) = a2;
  FIELD_U32(a1, 60) = a3;
  FIELD_U32(a1, 64) = a4;
  FIELD_U32(a1, 160) = a5;
  FIELD_U32(a1, 164) = a6;
  FIELD_U32(a1, 168) = a7;
  FIELD_U32(a1, 172) = a8;
  FIELD_U32(a1, 176) = a9;
  FIELD_U32(a1, 180) = a10;
  FIELD_U32(a1, 184) = a11;
  (**(void (__fastcall ***)(int, int))a1)(a1, 300);
  v17 = 0;
  v18 = 0;
  for ( i = 0; i != 300; ++i )
  {
    v20 = *(_DWORD **)(a1 + 72);
    if ( FIELD_U32(a1, 68) > i )
      v20 = (_DWORD *)((char *)v20 + v17);
    v17 += 12;
    *v20 = 0;
    v20[1] = 0;
    v20[2] = 0;
    v21 = *(_DWORD **)(a1 + 96);
    if ( FIELD_U32(a1, 92) > i )
      v21 = (_DWORD *)((char *)v21 + v18);
    *v21 = 0;
    v22 = *(_DWORD **)(a1 + 104);
    if ( FIELD_U32(a1, 100) > i )
      v22 = (_DWORD *)((char *)v22 + v18);
    *v22 = 0;
    v23 = *(_DWORD **)(a1 + 120);
    if ( FIELD_U32(a1, 116) > i )
      v23 = (_DWORD *)((char *)v23 + v18);
    v18 += 4;
    *v23 = 0;
    *(_BYTE *)(a1 + 2592 + i) = 0;
  }
  FIELD_U8(a1, 188) = 0;
  FIELD_U32(a1, 52) = 300;
  sub_6090B350(&v25);
  v26 |= 1u;
  v28 = 5;
  v29 = 6;
  v31 = 7;
  v27 = 1031798784;
  v25 = 257;
  v30 = 4;
  sub_60450C98(dword_60C9CEF0, &v25, 5);
  return 1;
}
