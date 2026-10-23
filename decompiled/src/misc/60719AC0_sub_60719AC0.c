/* sub_60719AC0
 * address: 0x60719AC0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60719AC0(int result)
{
  int v1; // r4
  int v2; // r1
  void **v3; // r5
  int i; // r6
  void *v5; // r1
  bool v6; // zf

  v1 = result;
  v2 = FIELD_U32(result, 44);
  if ( v2 )
  {
    result = FIELD_U32(result, 48);
    if ( result >= 1 )
    {
      v3 = (void **)(v2 + 48);
      for ( i = 0; i < result; ++i )
      {
        if ( *((unsigned __int16 *)v3 - 24) != 0xFFFF )
        {
          v5 = (void *)*((unsigned __int8 *)v3 - 40);
          v6 = v5 == 0;
          if ( *((_BYTE *)v3 - 40) )
          {
            v5 = *v3;
            v6 = *v3 == 0;
          }
          if ( !v6 )
          {
            DrawMgr_drawModel(DrawMgr_instance, v5);
            result = FIELD_U32(v1, 48);
          }
        }
        v3 += 14;
      }
    }
  }
  return result;
}
