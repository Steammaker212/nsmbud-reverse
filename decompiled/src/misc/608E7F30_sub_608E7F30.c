/* sub_608E7F30
 * address: 0x608E7F30   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7F30(int a1)
{
  _BYTE *v1; // r3
  int result; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  v1 = *(_BYTE **)(a1 + 4);
  if ( !v1 )
    return 0;
  result = 0;
  v3 = 0;
  if ( v1[76] )
  {
    (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v1 + 84))(v1, &v3);
    return v3;
  }
  return result;
}
