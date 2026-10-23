/* sub_6049DCD4
 * address: 0x6049DCD4   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049DCD4(int a1)
{
  int v2; // r0
  int *v3; // r9
  unsigned int i; // r1
  unsigned int v5; // r5
  unsigned int v6; // r5
  unsigned int j; // r5
  unsigned int v8; // r1
  unsigned int v9; // r1
  _BYTE *v10; // r7

  v3 = (int *)(a1 + 22496);
  v2 = FIELD_U32(a1, 22496);
  if ( v2 < 1 )
  {
    FIELD_U32(a1, 12964) = -1;
    FIELD_U32(a1, 12960) = -1;
    FIELD_U32(a1, 12956) = -1;
    FIELD_U32(a1, 12952) = -1;
    FIELD_U32(a1, 12948) = -1;
    FIELD_U32(a1, 12944) = -1;
    FIELD_U32(a1, 12940) = -1;
    FIELD_U32(a1, 12936) = -1;
  }
  else
  {
    for ( i = 0; (int)i < v2; ++i )
    {
      v5 = 0;
      if ( i < 4 )
        v5 = i;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v5 + 20276) + 2689) )
      {
        v6 = 0;
        if ( i < 7 )
          v6 = i;
        if ( *(_DWORD *)(a1 + 4 * v6 + 22332) != *(_DWORD *)(a1 + 4 * v6 + 22360) )
        {
          *(_BYTE *)(a1 + v6 + 22388) = 0;
          v2 = *v3;
        }
      }
    }
    FIELD_U32(a1, 12964) = -1;
    FIELD_U32(a1, 12960) = -1;
    FIELD_U32(a1, 12956) = -1;
    FIELD_U32(a1, 12952) = -1;
    FIELD_U32(a1, 12948) = -1;
    FIELD_U32(a1, 12944) = -1;
    FIELD_U32(a1, 12940) = -1;
    FIELD_U32(a1, 12936) = -1;
    if ( v2 >= 1 )
    {
      for ( j = 0; (int)j < v2; ++j )
      {
        v8 = 0;
        if ( j < 4 )
          v8 = j;
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v8 + 20276) + 2689) )
        {
          v9 = 0;
          if ( j < 7 )
            v9 = j;
          v10 = (_BYTE *)(a1 + v9 + 22388);
          if ( !*v10 )
          {
            if ( *(_DWORD *)(a1 + 4 * v9 + 22360) == 1 )
              sub_604A1D14(a1, j);
            else
              sub_604A1C24(a1, j);
            *v10 = 1;
            v2 = *v3;
          }
        }
      }
    }
  }
  sub_604741D8((_DWORD *)(a1 + 44), 0, &dword_60CA0B6C, 0);
  FIELD_U8(a1, 20308) = 1;
  sub_604741D8((_DWORD *)(a1 + 44), 1u, &dword_60CA0B8C, 0);
  FIELD_U8(a1, 20309) = 1;
  FIELD_U8(a1, 22501) = 1;
  return 22501;
}
