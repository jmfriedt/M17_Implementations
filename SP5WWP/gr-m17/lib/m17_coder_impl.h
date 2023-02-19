/* -*- c++ -*- */
/*
 * Copyright 2023 jmfriedt.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_M17_M17_CODER_IMPL_H
#define INCLUDED_M17_M17_CODER_IMPL_H

#include <gnuradio/m17/m17_coder.h>

namespace gr {
namespace m17 {

class m17_coder_impl : public m17_coder
{
private:
    // Nothing to declare in this block.
    std::string _meta;

public:
    void set_meta(std::string meta);
    m17_coder_impl(std::string src_ip,std::string dst_ip,short type,std::string meta);
    ~m17_coder_impl();


    // Where all the action really happens
    void forecast(int noutput_items, gr_vector_int& ninput_items_required);

    int general_work(int noutput_items,
                     gr_vector_int& ninput_items,
                     gr_vector_const_void_star& input_items,
                     gr_vector_void_star& output_items);
};

} // namespace m17
} // namespace gr

#endif /* INCLUDED_M17_M17_CODER_IMPL_H */
