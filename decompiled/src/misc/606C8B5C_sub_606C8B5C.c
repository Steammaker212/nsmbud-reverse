/* sub_606C8B5C
 * address: 0x606C8B5C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C8B5C(int a1)
{
  int v1; // r1
  unsigned int v2; // r0
  int result; // r0
  _DWORD *v4; // r3

  v1 = FIELD_U32(a1, 7076);
  v2 = FIELD_U32(a1, 7064);
  if ( v2 >= 8 )
    v2 = 0;
  result = EnemyCounterMaybe_instance + 4 * v2;
  v4 = (_DWORD *)(result + 68);
  if ( !v1 )
    v4 = (_DWORD *)(result + 36);
  *v4 = 0;
  return result;
}
