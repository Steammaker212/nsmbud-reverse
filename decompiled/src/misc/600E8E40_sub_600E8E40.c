/* sub_600E8E40
 * address: 0x600E8E40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E8E40(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r1

  v1 = a1;
  if ( FIELD_U8(a1, 8132) )
    v1 = FIELD_U32(a1, 56);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 716))(v1) )
    return 60;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 720))(v1);
  result = 25;
  if ( v3 == 1 )
    return 60;
  return result;
}
