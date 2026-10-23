/* sub_601CFB8C
 * address: 0x601CFB8C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CFB8C(int a1, _DWORD *a2, int a3)
{
  int v6; // r5
  int v7; // r6
  char v8; // r12

  v6 = 0;
  if ( !sub_607F6ABC(dword_60CC62E4) && (a3 != 1 || !sub_60190968(dword_60C8996C)) )
  {
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
    if ( ((unsigned int)&dword_60C88AB0 & ~(1612512264 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
    {
      dword_60C88AAC = (int)&off_60BD4BBC;
      _cxa_guard_release(&dword_60C88AB0);
    }
    v6 = 1;
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C88AAC) == 1 )
      {
        while ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 92))(v7) != 1 || !FIELD_U8(v7, 280) )
        {
          v7 = FIELD_U32(v7, 272);
          if ( !v7 )
            return v6;
        }
        *a2 &= 0xF0u;
      }
    }
  }
  return v6;
}
