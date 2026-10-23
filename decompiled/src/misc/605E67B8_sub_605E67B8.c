/* sub_605E67B8
 * address: 0x605E67B8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E67B8(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a2, 64);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 264))(result);
  return result;
}
