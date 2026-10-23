/* sub_605BCF40
 * address: 0x605BCF40   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BCF40(int a1)
{
  int result; // r0

  if ( !sub_6072A768(EventMgr__instance) && !sub_60729CF0(EventMgr__instance, 0) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB07EC);
  result = FIELD_U8(a1, 6260);
  if ( (result & 1) != 0 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    sub_605D0140(a1);
    if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB084C);
    }
    else
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
