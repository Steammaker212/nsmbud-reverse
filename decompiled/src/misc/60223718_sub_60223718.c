/* sub_60223718
 * address: 0x60223718   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60223718(int a1)
{
  _DWORD *v2; // r1
  int v3; // r1
  int i; // r7
  int v5; // r0
  int v6; // r2
  int j; // r5
  _DWORD *v8; // r1
  int result; // r0
  int v10; // r1
  int k; // r7

  if ( (FIELD_U8(a1, 1784) & 2) == 0 )
  {
    v2 = *(_DWORD **)(a1 + 12);
    if ( v2 )
      DrawMgr_drawModel2(DrawMgr_instance, v2);
  }
  v3 = FIELD_U32(a1, 660);
  if ( v3 >= 1 )
  {
    for ( i = 0; i < v3; ++i )
    {
      if ( (FIELD_U32(a1, 1784) & (1 << (i + 2))) == 0 )
      {
        v5 = *(_DWORD *)(FIELD_U32(a1, 668) + 4 * i);
        if ( !FIELD_U8(v5, 53) )
        {
          if ( v3 <= (unsigned int)i )
            v5 = 0;
          sub_60221D44((_DWORD **)v5);
          v3 = FIELD_U32(a1, 660);
        }
      }
    }
  }
  v6 = FIELD_U32(a1, 696);
  if ( v6 >= 1 )
  {
    for ( j = 0; j < v6; ++j )
    {
      if ( (FIELD_U32(a1, 1784) & (1 << (j + 9))) == 0 )
      {
        v8 = 0;
        if ( v6 > (unsigned int)j )
          v8 = *(_DWORD **)(FIELD_U32(a1, 704) + 4 * j);
        DrawMgr_drawModel2(DrawMgr_instance, v8);
        v6 = FIELD_U32(a1, 696);
      }
    }
  }
  result = FIELD_U8(a1, 1784);
  if ( (result & 1) == 0 )
    result = DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 8));
  v10 = FIELD_U32(a1, 660);
  if ( v10 >= 1 )
  {
    for ( k = 0; k < v10; ++k )
    {
      result = *(_DWORD *)(FIELD_U32(a1, 668) + 4 * k);
      if ( FIELD_U8(result, 53) && (FIELD_U32(a1, 1784) & (1 << (k + 2))) == 0 )
      {
        if ( v10 <= (unsigned int)k )
          result = 0;
        result = sub_60221D44((_DWORD **)result);
        v10 = FIELD_U32(a1, 660);
      }
    }
  }
  return result;
}
