/* ColliderMgr_add
 * address: 0x601535AC   size: 260   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall ColliderMgr_add(_DWORD *this, ColliderBase *a2)
{
  ColliderListNode *result; // r0

  result = FIELD_U32(a2, 0x10)[0].next;
  if ( !result )
  {
    result = FIELD_U32(a2, 0x10)[0].prev;
    if ( !result )
    {
      result = (ColliderListNode *)*(this + 5);
      if ( result != FIELD_U32(a2, 0x10) )
      {
        (*(void (__fastcall **)(_DWORD *))(*(this + 4) + 8))(this + 4);
        if ( (FIELD_U32(a2, 0x134) & 0xF) != 0 )
        {
          result = FIELD_U32(a2, 0x10)[1].next;
          if ( !result )
          {
            result = FIELD_U32(a2, 0x10)[1].prev;
            if ( !result )
            {
              result = (ColliderListNode *)*(this + 8);
              if ( result != &FIELD_U32(a2, 0x10)[1] )
                return (*(ColliderListNode *(__fastcall **)(_DWORD *))(*(this + 7) + 8))(this + 7);
            }
          }
        }
        else if ( (unsigned int)(unsigned __int16)FIELD_U32(a2, 0x130) - 2 > 2 )
        {
          result = FIELD_U32(a2, 0x10)[2].next;
          if ( !result )
          {
            result = FIELD_U32(a2, 0x10)[2].prev;
            if ( !result )
            {
              result = (ColliderListNode *)*(this + 11);
              if ( result != &FIELD_U32(a2, 0x10)[2] )
                return (*(ColliderListNode *(__fastcall **)(_DWORD *))(*(this + 10) + 8))(this + 10);
            }
          }
        }
        else
        {
          result = FIELD_U32(a2, 0x10)[4].next;
          if ( !result )
          {
            result = FIELD_U32(a2, 0x10)[4].prev;
            if ( !result )
            {
              result = (ColliderListNode *)*(this + 14);
              if ( result != &FIELD_U32(a2, 0x10)[4] )
                return (*(ColliderListNode *(__fastcall **)(_DWORD *))(*(this + 13) + 8))(this + 13);
            }
          }
        }
      }
    }
  }
  return result;
}
