/* sub_6045FC64
 * address: 0x6045FC64   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045FC64(int a1)
{
  _BYTE *v2; // r6
  int v3; // r5
  char v4; // r12
  float v5; // s2
  int result; // r0

  v2 = (_BYTE *)(a1 + 6792);
  if ( !FIELD_U8(a1, 6792) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D238);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6788));
  if ( ((unsigned int)&dword_60C92EFC & ~(1615199412 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
  {
    dword_60C92EF8 = (int)&off_60BE9194;
    _cxa_guard_release(&dword_60C92EFC);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C92EF8) == 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(v3, 6956);
      v5 = FIELD_F32(v3, 6960);
      FIELD_F32(a1, 112) = v5;
      FIELD_U32(a1, 116) = FIELD_U32(v3, 6964);
      FIELD_F32(a1, 112) = v5 + -7.0;
      FIELD_U32(a1, 160) = FIELD_U32(v3, 160);
    }
  }
  result = (unsigned __int8)*v2;
  if ( !*v2 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D238);
  return result;
}
