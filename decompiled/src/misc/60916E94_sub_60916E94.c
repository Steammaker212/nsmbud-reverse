/* sub_60916E94
 * address: 0x60916E94   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916E94(int a1, int a2)
{
  int v3; // r4
  void *v4; // r8
  int v5; // r5
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r6
  _DWORD v15[12]; // [sp+0h] [bp-30h] BYREF

  v3 = FIELD_U32(dword_60CD0B50, 20);
  v4 = (void *)(*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 24))(v3, FIELD_U32(a2, 40), 4);
  v5 = FIELD_U32(a2, 4);
  v6 = 0;
  if ( *(_DWORD *)a2 )
    v6 = dword_60CC73E8(*(_DWORD *)a2);
  qmemcpy(v4, (const void *)(v6 + v5), FIELD_U32(a2, 40));
  memset(v15, 0, 12);
  v7 = FIELD_U16(a2, 24);
  if ( v7 <= 1 )
    v7 = 1;
  v15[3] = v7;
  v8 = sub_609200A0(a2);
  v9 = FIELD_U16(a2, 26);
  if ( v8 > v9 )
    v9 = v8;
  v15[4] = v9;
  v10 = FIELD_U16(a2, 34);
  if ( v10 != 2 )
  {
    if ( v10 == 8 )
    {
      v12 = 6;
      goto LABEL_15;
    }
    if ( v10 != 4 )
    {
      v12 = 1;
      goto LABEL_15;
    }
  }
  v11 = sub_609200B8(a2);
  v12 = FIELD_U16(a2, 28);
  if ( v11 > v12 )
    v12 = v11;
LABEL_15:
  v13 = a2 + 64;
  v15[5] = v12;
  dword_60CC75AC(v13, 0, v15, v4);
  dword_60CC75BC(v13, 0, v15);
  return (*(int (__fastcall **)(int, void *))(*(_DWORD *)v3 + 28))(v3, v4);
}
