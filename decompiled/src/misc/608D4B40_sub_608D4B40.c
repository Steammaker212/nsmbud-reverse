/* sub_608D4B40
 * address: 0x608D4B40   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4B40(int a1, int a2, int a3)
{
  int v4; // r1
  bool v6; // zf

  if ( FIELD_U8(a3, 8) )
  {
    v4 = FIELD_U32(a3, 12);
    FIELD_U32(a1, 24) = v4;
    FIELD_U32(a1, 28) = FIELD_U32(a3, 16);
LABEL_3:
    FIELD_U32(a1, 20) = v4;
    return 1;
  }
  v6 = *(_BYTE *)a1 == 0;
  if ( *(_BYTE *)a1 )
    v6 = FIELD_U32(a1, 4) == 0;
  if ( !v6 && sub_608D4834(a1, FIELD_U32(a1, 12), a2, (_DWORD *)a3) == 1 )
  {
    v4 = FIELD_U32(a1, 24);
    goto LABEL_3;
  }
  FIELD_U32(a1, 20) = FIELD_U32(a1, 28);
  return 0;
}
