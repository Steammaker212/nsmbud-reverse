/* sub_60641F0C
 * address: 0x60641F0C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60641F0C(int a1)
{
  unsigned int v2; // r0
  int *v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r5
  int v8; // r0
  bool v9; // zf
  unsigned __int8 v11; // [sp+7h] [bp-11h] BYREF

  v2 = 0;
  v11 = 0;
  v3 = *(int **)(a1 + 6616);
  if ( v3 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = FIELD_U32(v4, 2196);
        if ( v5 )
          sub_60641D6C(v4, v5, &v11);
      }
      v3 = (int *)v3[1];
    }
    while ( v3 );
    v2 = v11;
  }
  v6 = FIELD_U8(a1, 7012);
  v7 = ((v2 >> 3) & 1) + ((v2 >> 2) & 1) + ((v2 >> 1) & 1) + (v2 & 1);
  if ( v6 == 1 )
  {
    if ( FIELD_U8(a1, 7030) )
    {
      a1 = 0;
      if ( !v7 )
        return a1;
      v8 = sub_60789DBC(PlayerMgr_instance);
    }
    else
    {
      v8 = sub_6078A030(PlayerMgr_instance);
      a1 = 0;
    }
    if ( v7 >= v8 )
      return 1;
  }
  else
  {
    v9 = v7 == 0;
    if ( !v7 )
    {
      a1 = 0;
      v9 = v6 == 2;
    }
    if ( !v9 )
      return 1;
  }
  return a1;
}
