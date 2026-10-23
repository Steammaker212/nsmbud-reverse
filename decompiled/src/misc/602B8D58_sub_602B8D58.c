/* sub_602B8D58
 * address: 0x602B8D58   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B8D58(int a1)
{
  int ProfileId; // r0
  int (__fastcall *v3)(int, int *); // r2

  ProfileId = Actor__getProfileId((Actor *)a1);
  v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
  if ( ProfileId != 639 )
    return v3(a1, &dword_60C910B4);
  v3(a1, &dword_60C91094);
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6352) = 0;
  return 6352;
}
