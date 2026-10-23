/* sub_6079437C
 * address: 0x6079437C   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079437C(int a1)
{
  unsigned int v2; // r0
  int v3; // r4
  int v4; // r0
  float v5; // s0

  v2 = FIELD_U32(a1, 28);
  switch ( v2 )
  {
    case 0x73u:
    case 0xACu:
    case 0xADu:
      goto LABEL_6;
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x8Au:
    case 0x8Cu:
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA5u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
      return 0;
    case 0x89u:
      v3 = 1;
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 0.0) )
        return v3;
      v4 = FIELD_U32(a1, 24);
      v5 = 30.0;
      goto LABEL_8;
    case 0x8Bu:
      v3 = 1;
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 3.0) )
        return v3;
      v4 = FIELD_U32(a1, 24);
      v5 = 18.0;
      goto LABEL_8;
    case 0x94u:
      v3 = 1;
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 0.0)
        || sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 15.0)
        || sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 30.0) )
      {
        return v3;
      }
      v4 = FIELD_U32(a1, 24);
      v5 = 45.0;
      goto LABEL_8;
    default:
      if ( v2 > 0x19 || ((1 << v2) & 0x200001E) == 0 )
        return 0;
LABEL_6:
      v3 = 1;
      if ( !sub_60418548(**(_DWORD **)(FIELD_U32(a1, 24) + 12) + 4, 4.0) )
      {
        v4 = FIELD_U32(a1, 24);
        v5 = 34.0;
LABEL_8:
        if ( !sub_60418548(**(_DWORD **)(v4 + 12) + 4, v5) )
          return 0;
      }
      return v3;
  }
}
