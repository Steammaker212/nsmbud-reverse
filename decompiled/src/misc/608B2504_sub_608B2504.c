/* sub_608B2504
 * address: 0x608B2504   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2504(int a1, int a2)
{
  unsigned __int16 *v4; // r0
  int v5; // r2

  v4 = (unsigned __int16 *)sub_608B1C30(FIELD_U32(a1, 60));
  if ( !v4 )
    return 0;
  *(_DWORD *)a2 = *v4;
  FIELD_U32(a2, 4) = v4[1];
  FIELD_U32(a2, 8) = v4[2];
  FIELD_U32(a2, 12) = v4[3];
  FIELD_U32(a2, 16) = v4[4];
  FIELD_U32(a2, 20) = v4[5];
  FIELD_U32(a2, 24) = v4[6];
  v5 = 1;
  if ( FIELD_U32(a1, 8) >= 0x20200u )
    v5 = *((unsigned __int8 *)v4 + 14);
  FIELD_U32(a2, 28) = v5;
  FIELD_U8(a2, 32) = *((_BYTE *)v4 + 15) & 1;
  return 1;
}
