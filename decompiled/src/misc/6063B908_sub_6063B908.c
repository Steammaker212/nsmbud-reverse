/* sub_6063B908
 * address: 0x6063B908   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6063B908(int a1, unsigned int a2)
{
  float *v2; // r5
  float *v4; // r7
  _DWORD *v5; // r1
  int v6; // r0
  void *v7; // r1
  float *result; // r0

  v2 = (float *)(a1 + 24);
  do
  {
    v4 = v2 - 6;
    DrawMgr_drawModel2(DrawMgr_instance, *((_DWORD **)v2 - 6));
    v5 = *((_DWORD **)v2 - 5);
    if ( v5 )
    {
      DrawMgr_drawModel2(DrawMgr_instance, v5);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    v7 = *((void **)v2 - 4);
    if ( v7 )
    {
      DrawMgr_drawModel(DrawMgr_instance, v7);
    }
    else if ( v6 != 1 )
    {
      goto LABEL_9;
    }
    sub_60414344((sead_ListNode *)dword_60C9A698, 10, v2);
LABEL_9:
    result = v2 + 3;
    v2 += 9;
  }
  while ( (unsigned int)(v4 + 9) < a2 );
  return result;
}
