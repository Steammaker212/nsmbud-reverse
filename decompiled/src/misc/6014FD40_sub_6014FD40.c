/* sub_6014FD40
 * address: 0x6014FD40   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014FD40(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r1

  result = 0;
  if ( FIELD_U8(a2, 220) )
    return result;
  v5 = FIELD_U32(a2, 304);
  switch ( (__int16)v5 )
  {
    case 2:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2528) & 0x10) != 0 )
        goto LABEL_23;
      return result;
    case 3:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2528) & 0xC) != 0 )
        goto LABEL_23;
      return result;
    case 20:
      v6 = *(_DWORD *)(a1 + 8 * a3 + 2528);
      if ( (v6 & 0x4000) != 0 )
        goto LABEL_18;
      return result;
    case 24:
      if ( (v5 & 0xFF0000) != 0 || *(int *)(a1 + 8 * a3 + 2528) >= 0 )
        goto LABEL_23;
      return result;
    case 25:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2533) & 8) == 0 )
        goto LABEL_23;
      return result;
    case 26:
      v6 = *(_DWORD *)(a1 + 8 * a3 + 2528);
LABEL_18:
      if ( (v6 & 0x2000) != 0 )
        goto LABEL_23;
      return result;
    case 31:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2533) & 2) == 0 )
        goto LABEL_23;
      return result;
    case 32:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2533) & 4) == 0 )
        goto LABEL_23;
      return result;
    case 37:
      goto LABEL_23;
    default:
      if ( (*(_BYTE *)(a1 + 8 * a3 + 2533) & 1) != 0 )
        return result;
LABEL_23:
      if ( (FIELD_U32(a2, 308) & 0xFF00) == 0xB00 && (*(_BYTE *)(a1 + 8 * a3 + 2533) & 0x20) != 0 )
        return result;
      v7 = FIELD_U32(a2, 136);
      if ( (v7 & 0x800) != 0 && (*(_BYTE *)(a1 + 8 * a3 + 2532) & 1) != 0 )
        return result;
      if ( (v7 & 0x1000) != 0 && (*(_BYTE *)(a1 + 8 * a3 + 2532) & 2) != 0 )
        return result;
      if ( (v7 & 0x180) == 0x180 )
      {
        if ( (*(_BYTE *)(a1 + 8 * a3 + 2532) & 0xC0) == 0 )
          return result;
        goto LABEL_36;
      }
      if ( ((v7 & 0x80) == 0 || (*(_BYTE *)(a1 + 8 * a3 + 2532) & 0x40) != 0)
        && ((v7 & 0x100) == 0 || (*(_BYTE *)(a1 + 8 * a3 + 2532) & 0x80) != 0) )
      {
LABEL_36:
        if ( (v7 & 0x200) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 8 * a3 + 2533) & 0x40) == 0 )
            return 1;
        }
        else
        {
          return 1;
        }
      }
      return result;
  }
}
