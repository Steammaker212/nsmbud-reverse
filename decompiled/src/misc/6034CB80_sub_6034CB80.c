/* sub_6034CB80
 * address: 0x6034CB80   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034CB80(int a1)
{
  sub_6039F328(a1, 1);
  if ( (unsigned int)(FIELD_U32(a1, 6568) - 3) > 1 || FIELD_F32(a1, 112) >= (float)(FIELD_F32(a1, 6576) + -1.5) )
    return ShellEnemy__vfDC(a1);
  FIELD_U32(a1, 124) = -1090519040;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94C80);
}
