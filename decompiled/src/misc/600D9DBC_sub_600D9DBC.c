/* sub_600D9DBC
 * address: 0x600D9DBC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D9DBC(int a1)
{
  if ( !FIELD_U8(a1, 8160) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C84438);
  FIELD_U32(a1, 7136) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  return KoopalingBase__vf5A0(a1);
}
