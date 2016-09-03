/*******************************************************************************
 * Project:  Nebula
 * @file     CodecProto.hpp
 * @brief    protobuf编解码器
 * @author   Bwar
 * @date:    2016年8月11日
 * @note     对应proto里msg.proto的MsgHead和MsgBody
 * Modify history:
 ******************************************************************************/
#ifndef SRC_CODEC_CODECPROTO_HPP_
#define SRC_CODEC_CODECPROTO_HPP_

#include "Codec.hpp"

namespace neb
{

class CodecProto: public Codec
{
public:
    CodecProto(E_CODEC_TYPE eCodecType, const std::string& strKey = "That's a lizard.");
    virtual ~CodecProto();

    virtual E_CODEC_STATUS Encode(const MsgHead& oMsgHead, const MsgBody& oMsgBody, loss::CBuffer* pBuff);
    virtual E_CODEC_STATUS Decode(loss::CBuffer* pBuff, MsgHead& oMsgHead, MsgBody& oMsgBody);
};

} /* namespace neb */

#endif /* SRC_CODEC_CODECPROTO_HPP_ */