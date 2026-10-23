/* sub_607FA390
 * address: 0x607FA390   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA390(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // lr
  unsigned int v8; // r2
  int v9; // r0

  v3 = 0;
  if ( !FIELD_U8(a1, 28) )
    return v3;
  if ( a2 )
  {
    if ( FIELD_U8(a1, 29) )
      return v3;
    v4 = FIELD_U32(a1, 40);
    v5 = a1 + 16;
  }
  else
  {
    v5 = a1 + 16;
    if ( FIELD_U8(a1, 20) < 3u )
    {
      if ( FIELD_U8(a1, 29) )
      {
        if ( !FIELD_U8(a1, 30) && FIELD_U8(a1, 23) )
        {
          v3 = 0;
          EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(a1, 23) - 1), 0, 1, 0, 0, 0, 0);
        }
      }
      else
      {
        v6 = FIELD_U8(a1, 22);
        if ( FIELD_U8(a1, 22) )
        {
          v7 = v6 - 33;
          v8 = 1u >> (33 - v6);
          v9 = 1 << (v6 - 1);
          if ( v7 >= 0 )
          {
            v8 = 1 << v7;
            v9 = 0;
          }
          if ( FIELD_U32(EventMgr__instance, 16) & v9 | FIELD_U32(EventMgr__instance, 20) & v8 )
          {
            v3 = 1;
            if ( sub_607FB148(FIELD_U32(a1, 40), v5) == 1 )
              goto LABEL_9;
          }
        }
      }
      return v3;
    }
    if ( FIELD_U8(a1, 29) )
      return v3;
    v4 = FIELD_U32(a1, 40);
  }
  v3 = 1;
  if ( sub_607FB148(v4, v5) == 1 )
  {
LABEL_9:
    v3 = 1;
    FIELD_U8(a1, 29) = 1;
    FIELD_U8(a1, 30) = 1;
  }
  return v3;
}
