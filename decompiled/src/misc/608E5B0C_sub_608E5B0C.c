/* sub_608E5B0C
 * address: 0x608E5B0C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608E5B0C(int a1, int a2)
{
  int v4; // r0
  int v6; // r5
  int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r1
  int v10; // [sp+0h] [bp-18h] BYREF
  unsigned int v11; // [sp+4h] [bp-14h]

  v4 = FIELD_U32(a1, 80);
  if ( !v4 )
    return 0;
  if ( FIELD_U32(a2, 8) || FIELD_U32(a2, 16) )
    return sub_608E6170((_BYTE *)a1, a2);
  v6 = 0;
  v10 = 0;
  v11 = 0;
  v7 = (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v4 + 24))(v4, a2, &v10);
  if ( v7 )
  {
    v8 = FIELD_U32(a2, 24);
    v9 = v11;
    if ( !v8 || !(v11 % v8) )
    {
      FIELD_U32(a2, 36) = v11;
      FIELD_U32(a2, 40) = v9;
      v6 = v7;
      FIELD_U8(a2, 44) = 0;
    }
  }
  return (char *)v6;
}
