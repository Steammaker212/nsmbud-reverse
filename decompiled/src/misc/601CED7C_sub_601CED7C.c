/* sub_601CED7C
 * address: 0x601CED7C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_601CED7C(unsigned int a1, unsigned int a2)
{
  int v2; // r0
  int v3; // r0
  unsigned int v5; // [sp+0h] [bp-8h]
  unsigned int v6; // [sp+4h] [bp-4h]

  v6 = a1;
  v5 = a2;
  switch ( a1 )
  {
    case 1u:
      if ( !a2 )
      {
        v6 = 0;
        v2 = 1;
        goto LABEL_23;
      }
      return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
    case 2u:
      if ( a2 == 1 )
      {
        v3 = 1;
        goto LABEL_22;
      }
      if ( !a2 )
      {
        v3 = 0;
LABEL_22:
        v6 = v3;
        v2 = 2;
        goto LABEL_23;
      }
      return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
    case 3u:
      if ( a2 > 2 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 3;
      goto LABEL_23;
    case 4u:
      if ( a2 > 3 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 4;
      goto LABEL_23;
    case 5u:
      if ( a2 > 4 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 5;
      goto LABEL_23;
    case 6u:
      if ( a2 > 5 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 6;
      goto LABEL_23;
    case 7u:
      if ( a2 > 6 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 7;
      goto LABEL_23;
    case 8u:
      if ( a2 > 7 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 8;
      goto LABEL_23;
    case 9u:
      if ( a2 > 8 )
        return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
      v6 = a2;
      v2 = 9;
LABEL_23:
      v5 = v2;
      return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
    default:
      return (char *)&unk_60AFCAC8 + 120 * v6 + 12 * v5;
  }
}
