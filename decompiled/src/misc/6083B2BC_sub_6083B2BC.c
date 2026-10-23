/* sub_6083B2BC
 * address: 0x6083B2BC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083B2BC(int a1, int a2, float *a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r6
  int v9; // r4
  int v10; // r0
  unsigned int v11; // r4
  int v12; // r0
  int v13; // r1
  _BYTE v15[128]; // [sp+0h] [bp-80h] BYREF

  dword_60CC75DC(v15);
  dword_60CC75D8(v15, *(_DWORD *)a2);
  v6 = ((int (__fastcall *)(_DWORD))loc_6083AB64)(*((unsigned __int16 *)a3 + 3));
  v7 = ((int (__fastcall *)(_DWORD))loc_6083ABD4)(*((unsigned __int16 *)a3 + 3));
  dword_60CC75E0(v15, v6, v7);
  v8 = sub_6083AC10(*(unsigned __int8 *)a3);
  v9 = sub_6083AC10(*((unsigned __int8 *)a3 + 1));
  v10 = sub_6083AC10(*((unsigned __int8 *)a3 + 2));
  dword_60CC75E4(v15, v8, v9, v10);
  dword_60CC75E8(v15, a3[2], a3[3]);
  dword_60CC75EC(v15, a3[4]);
  v11 = *((unsigned __int16 *)a3 + 3);
  v12 = sub_6083AC78(*((unsigned __int8 *)a3 + 3));
  dword_60CC75F0(v15, (v11 >> 7) & 1, v12);
  dword_60CC75F4(v15, (char *)&unk_60B0E3F0 + 16 * *((unsigned __int8 *)a3 + 4));
  if ( (*((_BYTE *)a3 + 6) & 0x40) != 0 )
    dword_60CC7600(v15, (float)*((unsigned __int8 *)a3 + 5));
  v13 = 0;
  if ( (FIELD_U8(a2, 12300) & 1) != 0 )
    v13 = dword_60B0E420[HIBYTE(*((unsigned __int16 *)a3 + 3)) & 3];
  dword_60CC7604(v15, v13);
  FIELD_U32(a1, 8) = a1 + 16;
  dword_60CC7638();
  FIELD_U8(a1, 1) &= ~1u;
  *(_BYTE *)a1 = 1;
  return 1;
}
