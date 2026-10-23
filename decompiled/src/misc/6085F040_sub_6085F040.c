/* sub_6085F040
 * address: 0x6085F040   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F040(int a1)
{
  char v1; // r0
  __int16 v3; // [sp+4h] [bp-Ch] BYREF
  __int16 v4; // [sp+6h] [bp-Ah]

  (*(void (__fastcall **)(__int16 *))(*(_DWORD *)a1 + 16))(&v3);
  v1 = v4;
  if ( v4 )
    v1 = 1;
  return (v3 != 0) & (unsigned __int8)v1;
}
