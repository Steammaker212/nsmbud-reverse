/* sub_608C6E60
 * address: 0x608C6E60   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C6E60(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r0
  int v8; // r5
  int v9; // r6
  int *v10; // r0
  int v12[4]; // [sp+4h] [bp-54h] BYREF
  int v13; // [sp+14h] [bp-44h] BYREF
  unsigned __int8 v14; // [sp+1Ch] [bp-3Ch]
  int v15[3]; // [sp+20h] [bp-38h] BYREF
  char v16; // [sp+2Ch] [bp-2Ch]
  char v17; // [sp+38h] [bp-20h] BYREF

  v7 = sub_608CBCA4(&v17, a1);
  v8 = 0;
  v16 = 0;
  v15[2] = 0;
  sub_608CBE0C(v7, v15, a2, 0);
  v9 = sub_608B4094(a4, v15[0]);
  if ( v9 )
  {
    v13 = -1;
    v14 = 0;
    sub_608A9F2C(a3, v15[0], (int)&v13);
    v10 = sub_608B4894(v12, v9, v14);
    return sub_608B4A8C((int)v10, v15[1]);
  }
  return v8;
}
