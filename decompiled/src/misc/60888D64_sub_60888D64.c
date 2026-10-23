/* sub_60888D64
 * address: 0x60888D64   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60888D64(int a1)
{
  int v1; // r2
  int v2; // r0

  v1 = FIELD_U32(a1, 4);
  if ( v1 )
  {
    if ( FIELD_U8(v1, 116) )
    {
      v2 = *(_DWORD *)(FIELD_U32(a1, 8) + 732);
      if ( v2 )
      {
        if ( FIELD_U8(v2, 16) )
          sub_60889A70(dword_60CC801C);
        else
          debugPrintRelated3("Vertex buffer for stripe has not allocated\n");
      }
      else
      {
        debugPrintRelated3("EmitterPluginUserData is empty\n");
      }
    }
    else
    {
      debugPrintRelated3("Stripe instance is not used\n");
    }
  }
  else
  {
    debugPrintRelated3("Stripe instance is null\n");
  }
}
