/* sub_60515B80
 * address: 0x60515B80   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60515B80(int a1, unsigned int a2, unsigned int a3)
{
  bool v5; // zf
  bool v6; // cc
  char v7; // r6
  bool v8; // cc

  v5 = dword_60CC6D8C == 0;
  if ( dword_60CC6D8C )
    v5 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( v5 )
  {
    v8 = a2 > 3;
    v7 = 0;
    if ( a2 <= 3 )
      v8 = a3 > 4;
    if ( !v8 )
    {
      FIELD_U32(a1, 27920) = a2;
      sub_6050A950(a1 + 20660, a2);
      FIELD_U32(a1, 29964) = a3;
      FIELD_U32(a1, 15028) |= 1u;
    }
  }
  else
  {
    v6 = a2 > 3;
    v7 = 1;
    if ( a2 <= 3 )
      v6 = a3 > 4;
    if ( !v6 )
    {
      FIELD_U32(a1, 12936) = a2;
      sub_6050A950(a1 + 5676, a2);
      FIELD_U32(a1, 14980) = a3;
      FIELD_U32(a1, 44) |= 1u;
    }
  }
  FIELD_U8(a1, 29972) = v7;
  return 29972;
}
