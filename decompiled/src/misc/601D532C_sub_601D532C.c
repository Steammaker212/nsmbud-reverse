/* sub_601D532C
 * address: 0x601D532C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D532C(int a1)
{
  unsigned int v2; // r6
  int v3; // r4
  bool v4; // zf
  int v6; // r8

  if ( sub_602205C8(dword_60C8D4EC) != 1 )
    return 0;
  v2 = sub_601CFDE0(dword_60C8AEF0);
  if ( !v2 )
    return 0;
  while ( 2 )
  {
    switch ( FIELD_U32(a1, 1096) )
    {
      case 2:
        v3 = 2;
        if ( (v2 & 0x20) == 0 )
          goto LABEL_9;
        break;
      case 4:
        v3 = 4;
        if ( (v2 & 0x40) == 0 )
          goto LABEL_9;
        break;
      case 5:
        v3 = 5;
        if ( (v2 & 0x80) == 0 )
          goto LABEL_9;
        break;
      default:
LABEL_9:
        v3 = 3;
        v4 = (v2 & 0x10) == 0;
        if ( (v2 & 0x10) == 0 )
        {
          v3 = 2;
          v4 = (v2 & 0x20) == 0;
        }
        if ( v4 )
        {
          v3 = 4;
          if ( (v2 & 0x40) == 0 )
            v3 = 6 - ((v2 >> 7) & 1);
        }
        break;
    }
    if ( RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, v3, 1) != 1 )
    {
      switch ( v3 )
      {
        case 2:
          v2 &= ~0x20u;
          if ( v2 )
            continue;
          goto LABEL_25;
        case 3:
          v2 &= ~0x10u;
          if ( v2 )
            continue;
          goto LABEL_25;
        case 4:
          v2 &= ~0x40u;
          if ( v2 )
            continue;
          goto LABEL_25;
        case 5:
          v2 &= ~0x80u;
          goto LABEL_24;
        default:
LABEL_24:
          if ( v2 )
            continue;
LABEL_25:
          sub_601B3AB0(a1, v3);
          break;
      }
      return 0;
    }
    break;
  }
  FIELD_U32(a1, 1092) = v3;
  v6 = -1;
  if ( FIELD_U32(a1, 1096) == v3 )
    return 1;
  return v6;
}
