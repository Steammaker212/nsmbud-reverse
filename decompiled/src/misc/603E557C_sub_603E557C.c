/* sub_603E557C
 * address: 0x603E557C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E557C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0
  int v5; // r0
  int v6; // r0

  v2 = a1[8];
  if ( v2 )
  {
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
    result = a1[8];
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
      a1[8] = 0;
    }
    else if ( result )
    {
      return result;
    }
  }
  result = a1[6];
  if ( result >= 1 )
  {
    v5 = sub_608DE5C8(a1 + 4);
    if ( v5 )
      v6 = v5 - a1[7];
    else
      v6 = 0;
    a1[8] = v6;
    return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 16))(v6);
  }
  return result;
}
