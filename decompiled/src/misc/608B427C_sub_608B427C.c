/* sub_608B427C
 * address: 0x608B427C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B427C(int *a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r4
  int v9; // r0
  unsigned int v10; // r7
  int v11; // r8
  int v12; // r0
  int v13; // r0
  _DWORD v15[2]; // [sp+8h] [bp-38h] BYREF
  int v16; // [sp+10h] [bp-30h]
  char v17; // [sp+14h] [bp-2Ch]
  char v18; // [sp+20h] [bp-20h] BYREF

  if ( !a2 )
    return 0;
  v7 = sub_608CBCA4(&v18, a2);
  v8 = 0;
  v17 = 0;
  v16 = 0;
  v9 = sub_608CBE0C(v7, v15, a3, 0);
  v10 = v15[0];
  if ( !v9 )
    v10 = -1;
  if ( v9 == 1 )
  {
    v8 = 0;
    v11 = v15[1];
    v15[0] = -1;
    LOBYTE(v16) = 0;
    if ( sub_608A9F2C(a1[1], v10, (int)v15) == 1 )
    {
      if ( (_BYTE)v16 )
      {
        v12 = sub_608B3698(a1, v10, v11, a4, 0);
      }
      else
      {
        v13 = sub_608A9A94(a1[1], v10);
        v12 = sub_608B3598(a1, v13, a4, 0, 1);
      }
      if ( v12 )
        return 1;
    }
  }
  return v8;
}
