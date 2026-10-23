/* sub_601F0850
 * address: 0x601F0850   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F0850(StateMgr *a1)
{
  StateMgr *v2; // r5
  int (__fastcall *vtable)(StateMgr *, int); // r5
  int v4; // r0

  v2 = a1 + 18;
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[23].methodExecuter.owner)(a1);
  StateMgr__execute(v2);
  if ( sub_60190968(dword_60C8996C) )
  {
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      vtable = (int (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[23].methodExecuter.vtable;
      v4 = sub_6019112C(dword_60C8996C);
      if ( !vtable(a1, v4) )
        ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    }
  }
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[20].methodExecuter.vtable)(a1);
  return 1;
}
