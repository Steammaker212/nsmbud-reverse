/* sub_6092FF48
 * address: 0x6092FF48   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092FF48(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  char v7; // r0
  int v8; // r0
  int v10; // [sp+0h] [bp-90h] BYREF
  unsigned __int8 v11[28]; // [sp+18h] [bp-78h] BYREF
  unsigned int v12; // [sp+34h] [bp-5Ch]
  char v13; // [sp+40h] [bp-50h]
  char v14; // [sp+41h] [bp-4Fh]
  char v15; // [sp+42h] [bp-4Eh]
  char v16; // [sp+43h] [bp-4Dh]
  char v17; // [sp+44h] [bp-4Ch]
  char v18; // [sp+45h] [bp-4Bh]

  sub_6090B350((int)v11);
  *(_WORD *)v11 = 0;
  v12 = v12 & 0xFFFFFFF0 | 7;
  v6 = *(_DWORD *)(FIELD_U32(a3, 12) + 464);
  if ( v6 <= 3 )
  {
    v7 = 8 * v6;
    v13 = 0xA010505u >> v7;
    v14 = v13;
    v15 = 0x2030206u >> v7;
    v16 = v15;
    v17 = 1;
    v18 = 1;
  }
  sub_6090B4B0(v11, a2);
  v8 = ((int (__fastcall *)(int *, _DWORD))loc_6090E438)(&v10, FIELD_U32(a3, 16));
  sub_6090E560(v8, a2, *(float **)(a3 + 16));
  sub_6090B260(FIELD_U32(a3, 16));
  sub_6091DD8C(*(_DWORD *)(FIELD_U32(a3, 12) + 716), a2);
  ((void (__fastcall *)(_DWORD, int, int, _DWORD))loc_60930AA8)(
    FIELD_U32(a3, 12),
    a2,
    a3,
    *(_DWORD *)(FIELD_U32(a3, 12) + 716));
  return sub_609301A4(a1, a2, a3);
}
